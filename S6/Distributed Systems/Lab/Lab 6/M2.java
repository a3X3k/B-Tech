import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.rmi.registry.*;
import java.util.*;
public class M2 extends UnicastRemoteObject implements Lamport{
    public static int clk = 0;
    public static Set<Integer> mkids = new HashSet<Integer>();
    public static ArrayList<ArrayList<String>> ls2=new ArrayList<ArrayList<String>>();
    public M2() throws RemoteException{
        super(0);
    }
    public void recv_mar(int c,int frm,ArrayList<ArrayList<String>> ls,int mid)throws RemoteException{
        //Pair<Integer,Integer> p = new Pair<Integer,Integer>(mid,frm);
        if(!mkids.contains(frm)){
            mkids.add(frm);
            System.out.println("Local State(LS2): "+ls2);
            System.out.println("Channel State(SC"+frm+"2): []");
            try{
                clk++;
                Lamport server=(Lamport)Naming.lookup("//localhost/M1");
                server.recv_mar(clk,2,ls2,mid);
                System.out.println("C2 sent an marker at "+clk+" to M1");
                    
                server=(Lamport)Naming.lookup("//localhost/M3");
                server.recv_mar(clk,2,ls2,mid);
                System.out.println("C2 sent an marker at "+clk+" to M3");
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println("C2 failed to send an marker at "+clk);
            }
        }
        else{
            ArrayList<ArrayList<String>> temp=new ArrayList<ArrayList<String>>();
            for(int i=0;i<ls.size();i++){
                if(ls.get(i).get(0)=="Send" && ls.get(i).get(1)=="2"){
                    boolean fl=true;
                    for(int j=0;j<ls2.size();j++){
                        if(ls2.get(j).get(0)=="Reci" && ls2.get(j).get(1)==(frm+"")){
                            fl=false;
                            break;
                        }
                    }
                    if(fl){
                        temp.add(ls.get(i));
                    }
                }
            }
            System.out.println("Channel State(SC"+frm+"2): "+temp);
        }
    }
    synchronized public void event(int c,int frm) throws RemoteException{
        clk=Math.max(clk,c)+1;
        System.out.println("M2 recieved an event at "+clk+" from M"+frm);
        ls2.add(new ArrayList<String>(Arrays.asList("Reci",frm+"")));
    }
    public static class Client extends Thread{
        public void run(){
            System.out.println("C2 started!");
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println("Failed to Sleep");
            }
            Random r=new Random();
            while(true){
                int t=r.nextInt(5);
                if(t==0){
                    try{
                        int s=r.nextInt(4);
                        if(s==0 || s==2){
                            continue;
                        }
                        synchronized(this){
                            clk++;
                            Lamport server=(Lamport)Naming.lookup("//localhost/M"+s);
                            server.event(clk,2);
                            System.out.println("C2 sent an external event at "+clk+" to M"+s);
                            ls2.add(new ArrayList<String>(Arrays.asList("Send",s+"")));
                        }
                        Thread.sleep(2000);
                    }
                    catch(Exception e){
                        System.out.println("C2 failed to send an external event at "+clk);
                    }
                }
                else{
                    try{
                        Thread.sleep(2000);
                    }
                    catch(Exception e){
                        System.out.println("Failed to Sleep");
                    }
                }
            }
        }
    }
    public static void main(String args[]) throws Exception {
        System.out.println("M2 started!");
        try { //special exception handler for registry creation
            LocateRegistry.createRegistry(2901);
            System.out.println("java RMI registry for M2 created at 2901");
        } catch (RemoteException e) {
            System.out.println("java RMI registry already exists.");
        }
        M2 server = new M2();
        Naming.rebind("//localhost/M2", server);
        System.out.println("PeerServer bound in registry");
        Client cli=new Client();
        cli.start();
    }
}