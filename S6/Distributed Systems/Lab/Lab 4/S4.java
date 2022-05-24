import java.rmi.*;
import java.rmi.registry.*;

public class S4 
{
    String name = "Process - 4";

    String address = "rmi://localhost:1903/server4";
    public static void main(String args[]) 
    {
        try 
        {

            Thread.sleep(2000);
            // Create an object of the interface implementation class
            Receive obj = new RemoteReceive();

            // rmiregistry within the server JVM with port number 1900
            LocateRegistry.createRegistry(1903);

            // Binds the remote object by the name server3
            S4 server4 = new S4();

            Naming.rebind(server4.address, obj);

            System.out.println("Server 4 & Client 4 have Started :)");

            // Create a client thread and start it
            C4 client4 = new C4(server4.name, obj.clock);

            

            client4.start();

        } catch (Exception e) { System.out.println(e); }
    }
}