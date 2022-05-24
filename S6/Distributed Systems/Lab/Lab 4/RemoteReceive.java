import java.rmi.*;
import java.rmi.server.*;

public class RemoteReceive extends UnicastRemoteObject implements Receive 
{

    RemoteReceive() throws RemoteException 
    {
        super();
    }
    
    public void receive(String process, int time) throws RemoteException 
    {
        if (clock.time > time) { clock.time ++; }

        else { clock.time = time + 1; }            
    }
}