import java.rmi.*;
import java.rmi.registry.*;

public class S3 
{
    String name = "Process - 3";

    String address = "rmi://localhost:1902/server3";
    public static void main(String args[]) 
    {
        try 
        {

            Thread.sleep(3000);
            // Create an object of the interface implementation class
            Receive obj = new RemoteReceive();
            


            // rmiregistry within the server JVM with port number 1900
            LocateRegistry.createRegistry(1902);

            // Binds the remote object by the name server3
            S3 server3 = new S3();

            Naming.rebind(server3.address, obj);

            System.out.println("Server 3 & Client 3 have Started :)");

            // Create a client thread and start it
            C3 client3 = new C3(server3.name, obj.clock);

            

            client3.start();

        } catch (Exception e) { System.out.println(e); }
    }
}