import java.rmi.Remote;
import java.rmi.RemoteException;
import java.util.ArrayList;
public interface Lamport extends Remote{
    // Declaring the method prototype
    void event(int c,int frm) throws RemoteException;
    void recv_mar(int c,int frm,ArrayList<ArrayList<String>> ls,int mid)throws RemoteException;
}