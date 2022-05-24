import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.rmi.registry.*;
import java.util.*;
public class M3 extends UnicastRemoteObject implements Lamport{
    public static int clk = 0;
    public static Set<Integer> mkids = new HashSet<Integer>();
    public static ArrayList<ArrayList<String>> ls3=new ArrayList<ArrayList<String>>();
    public M3() throws RemoteException{
        super(0);
    }
    public void recv_mar(int c,int frm,ArrayList<ArrayList<String>> ls,int mid)throws RemoteException{
        //Pair<Integer,Integer> p = new Pair<Integer,Integer>(mid,frm);
        if(!mkids.contains(frm)){
            mkids.add(frm);
            System.out.println("Local State(LS3): "+ls3);
            System.out.println("Channel State(SC"+frm+"3): []");
            try{
                    clk++;
                    Lamport server=(Lamport)Naming.lookup("//localhost/M1");
                    server.recv_mar(clk,3,ls3,mid);
                    System.out.println("C3 sent an marker at "+clk+" to M1");
                    
                    server=(Lamport)Naming.lookup("//localhost/M2");
                    server.recv_mar(clk,3,ls3,mid);
                    System.out.println("C3 sent an marker at "+clk+" to M2");
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println("C3 failed to send an marker at "+clk);
            }
        }
        else{
            ArrayList<ArrayList<String>> temp=new ArrayList<ArrayList<String>>();
            for(int i=0;i<ls.size();i++){
                if(ls.get(i).get(0)=="Send" && ls.get(i).get(1)=="3"){
                    boolean fl=true;
                    for(int j=0;j<ls3.size();j++){
                        if(ls3.get(j).get(0)=="Reci" && ls3.get(j).get(1)==(frm+"")){
                            fl=false;
                            break;
                        }
                    }
                    if(fl){
                        temp.add(ls.get(i));
                    }
                }
            }
            System.out.println("Channel State(SC"+frm+"3): "+temp);
        }
    }
    synchronized public void event(int c,int frm) throws RemoteException{
        clk=Math.max(clk,c)+1;
        System.out.println("M3 recieved an event at "+clk+" from M"+frm);
        ls3.add(new ArrayList<String>(Arrays.asList("Reci",frm+"")));
    }
    public static class Client extends Thread{
        public void run(){
            System.out.println("C3 started!");
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
                        if(s==0 || s==3){
                            continue;
                        }
                        synchronized(this){
                            clk++;
                            Lamport server=(Lamport)Naming.lookup("//localhost/M"+s);
                            server.event(clk,3);
                            System.out.println("C3 sent an external event at "+clk+" to M"+s);
                            ls3.add(new ArrayList<String>(Arrays.asList("Send",s+"")));
                        }
                        Thread.sleep(2000);
                    }
                    catch(Exception e){
                        System.out.println("C3 failed to send an external event at "+clk);
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
        System.out.println("M3 started!");
        try { //special exception handler for registry creation
            LocateRegistry.createRegistry(2902);
            System.out.println("java RMI registry for M3 created at 2902");
        } catch (RemoteException e) {
            System.out.println("java RMI registry already exists.");
        }
        M3 server = new M3();
        Naming.rebind("//localhost/M3", server);
        System.out.println("PeerServer bound in registry");
        Client cli=new Client();
        cli.start();
    }
}