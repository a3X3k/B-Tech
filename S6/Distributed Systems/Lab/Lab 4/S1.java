import java.rmi.*;
import java.rmi.registry.*;

public class S1 
{
    String name = "Process - 1";

    String address = "rmi://localhost:1900/server1";
    public static void main(String args[]) 
    {
        try 
        {

            Thread.sleep(5000);
            // Create an object of the interface implementation class
            Receive obj = new RemoteReceive();
            

            // rmiregistry within the server JVM with port number 1900
            LocateRegistry.createRegistry(1900);

            // Binds the remote object by the name server1
            S1 server1 = new S1();

            Naming.rebind(server1.address, obj);

            System.out.println("Server 1 & Client 1 have Started :)");

            // Create a client thread and start it
            C1 client1 = new C1(server1.name, obj.clock);

            

            client1.start();

        } catch (Exception e) { System.out.println(e); }
    }
}