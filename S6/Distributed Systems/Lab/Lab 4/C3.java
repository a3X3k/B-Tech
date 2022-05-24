import java.rmi.*;

import java.lang.Math;

public class C3 extends Thread 
{
    String name; Clock clock;

    String[] address = new String[3];

    public C3(String name, Clock clock) 
    {
        this.name = name; this.clock = clock;

        this.address[0] = "rmi://localhost:1900/server1";

        this.address[1] = "rmi://localhost:1901/server2";

        this.address[2] = "rmi://localhost:1903/server4";
    }

    public void internal()
    {
        
        this.clock.time += 1;

        System.out.println("Internal Event has occured in Process 3 with time : " + this.clock.time);
    }

    public void send() 
    {

        int r = (int) (Math.random() * (3));

        this.clock.time += 1;

        try 
        {
            Receive recv = (Receive) Naming.lookup(this.address[r]);

            recv.receive(this.name, this.clock.time);

            if (r == 0)
            {
                System.out.println("Send Event has occured from Process 3 to Process 1 with time : " + this.clock.time);
            }

            else if(r == 1)
            {
                System.out.println("Send Event has occured from Process 3 to Process 2 with time : " + this.clock.time);
            }

            else
            {
                System.out.println("Send Event has occured from Process 3 to Process 4 with time : " + this.clock.time);
            }
            
        } 
        
        catch (Exception e) { System.out.println(e); }
    }

    public void run()
    { 
        
        try 
        {
            int x;

            for (int i = 0; i < 15; i++) 
            {
                x = (int) (Math.random() * (2));

                if (x == 0) { this.internal(); } 
                
                else { this.send(); }

            }
        } 
        
        catch (Exception e) { System.out.println(e); }

    }
}
