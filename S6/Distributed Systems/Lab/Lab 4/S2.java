import java.rmi.*;
import java.rmi.registry.*;

public class S2 
{
    String name = "Process - 2";

    String address = "rmi://localhost:1901/server2";
    public static void main(String args[]) 
    {
        try 
        {

            Thread.sleep(4000);
            // Create an object of the interface implementation class
            Receive obj = new RemoteReceive();
            

            // rmiregistry within the server JVM with port number 1900
            LocateRegistry.createRegistry(1901);

            // Binds the remote object by the name server1
            S2 server2 = new S2();

            Naming.rebind(server2.address, obj);

            System.out.println("Server 2 & Client 2 have Started :)");

            // Create a client thread and start it
            C2 client2 = new C2(server2.name, obj.clock);

            

            client2.start();

        } catch (Exception e) { System.out.println(e); }
    }
}