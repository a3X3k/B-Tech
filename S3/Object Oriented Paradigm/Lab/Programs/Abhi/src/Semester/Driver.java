package Semester;

class MyThread extends Thread 
{
    MyThread() 
    {
        System.out.print(" Amrita");
    }
    public void run() 
    {
        System.out.print(" CSE");
    }
    public void run(String s) 
    {
        System.out.println(" Batch");
    }
}

public class Driver {

	
    public static void main(String [] args) 
    {
    	Thread t = new MyThread() 
    	{
    	    public void run() 
    	    {
    	        System.out.println(" Java");
    	    }
    	};
    	t.start();
    }

}
