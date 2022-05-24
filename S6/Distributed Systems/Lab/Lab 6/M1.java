import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.rmi.registry.*;
import java.util.*;

public class M1 extends UnicastRemoteObject implements Lamport{
    public static int clk = 0;
    public static Set<Integer> mkids = new HashSet<Integer>();
    public static ArrayList<ArrayList<String>> ls1=new ArrayList<ArrayList<String>>();
    public M1() throws RemoteException{
        super(0);
    }
    public void recv_mar(int c,int frm,ArrayList<ArrayList<String>> ls,int mid)throws RemoteException{
        //Pair<Integer,Integer> p = new Pair<Integer,Integer>(mid,frm);
        if(!mkids.contains(frm)){
            //System.out.println("Start1-1");
            mkids.add(frm);
            System.out.println("Local State(LS1): "+ls1);
            System.out.println("Channel State(SC"+frm+"1): {}");
            try{
                clk++;
                Lamport server=(Lamport)Naming.lookup("//localhost/M2");
                server.recv_mar(clk,1,ls1,mid);
                System.out.println("C1 sent an marker at "+clk+" to M2");
            
                server=(Lamport)Naming.lookup("//localhost/M3");
                server.recv_mar(clk,1,ls1,mid);
                System.out.println("C1 sent an marker at "+clk+" to M3");
            }
            catch(Exception e){
                System.out.println("C1 failed to send an marker at "+clk);
            }
            //System.out.println("End1-1");
        }
        else{
            //System.out.println("Start1-2");
            ArrayList<ArrayList<String>> temp=new ArrayList<ArrayList<String>>();
            for(int i=0;i<ls.size();i++){
                if(ls.get(i).get(0)=="Send" && ls.get(i).get(1)=="1"){
                    boolean fl=true;
                    for(int j=0;j<ls1.size();j++){
                        if(ls1.get(j).get(0)=="Reci" && ls1.get(j).get(1)==(frm+"")){
                            fl=false;
                            break;
                        }
                    }
                    if(fl){
                        temp.add(ls.get(i));
                    }
                }
            }
            System.out.println("Channel State(SC"+frm+"1): "+temp);
            //System.out.println("End1-2");
        }
    }
    synchronized public void event(int c,int frm) throws RemoteException{
        clk=Math.max(clk,c)+1;
        System.out.println("M1 recieved an event at "+clk+" from M"+(frm+1));
        ls1.add(new ArrayList<String>(Arrays.asList("Reci",frm+"")));
    }
    public static class Client extends Thread{
        public void run(){
            System.out.println("C1 started!");
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println("Failed to Sleep");
            }
            Random r=new Random();
            int tp=0;
            while(true){
                tp++;
                if(tp==10){
                    mkids.add(1);
                    try{
                            System.out.println("C1 initiated Global Snapshot!");
                            clk++;
                            Lamport server=(Lamport)Naming.lookup("//localhost/M2");
                            server.recv_mar(clk,1,ls1,1);
                            System.out.println("C1 sent an marker at "+clk+" to M2");
                            
                            server=(Lamport)Naming.lookup("//localhost/M3");
                            server.recv_mar(clk,1,ls1,1);
                            System.out.println("C1 sent an marker at "+clk+" to M3");
                        Thread.sleep(2000);
                    }
                    catch(Exception e){
                        System.out.println("C1 failed to send an marker at "+clk);
                    }
                }
                int t=r.nextInt(5);
                if(t==0){
                    try{
                        int s=r.nextInt(4);
                        if(s==0 || s==1){
                            continue;
                        }
                        synchronized(this){
                            clk++;
                            Lamport server=(Lamport)Naming.lookup("//localhost/M"+s);
                            server.event(clk,1);
                            System.out.println("C1 sent an external event at "+clk+" to M"+s);
                            ls1.add(new ArrayList<String>(Arrays.asList("Send",s+"")));
                        }
                        Thread.sleep(2000);
                    }
                    catch(Exception e){
                        System.out.println("C1 failed to send an external event at "+clk);
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
        System.out.println("M1 started!");
        try { //special exception handler for registry creation
            LocateRegistry.createRegistry(2900);
            System.out.println("java RMI registry for M1 created at 2900");
        } catch (RemoteException e) {
            System.out.println("java RMI registry already exists.");
        }
        M1 server = new M1();
        Naming.rebind("//localhost/M1", server);
        System.out.println("PeerServer bound in registry");
        Client cli=new Client();
        cli.start();
    }
}