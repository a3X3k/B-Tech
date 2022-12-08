package Thread;

public class Onethread extends Thread{

	public void run() 
    { 
        System.out.println("CS "); 
        try { 
            Thread.sleep(300); 
        } 
        catch (InterruptedException ie) { 
        } 
        System.out.println("engineering "); 

    }
	public static void main(String[] args) {
		
        Onethread c1 = new Onethread(); 
        Onethread c2 = new Onethread(); 
        c1.start(); 
        c2.start(); 
        System.out.println(c1.isAlive()); 
        System.out.println(c2.isAlive()); 
	}
}
