import java.rmi.*;

public interface Receive extends Remote
{ 
    
    Clock clock = new Clock();

    public void receive(String process, int time) throws RemoteException;

}