package Thread;

public class Onethread1 extends Thread{
	
	    public void run() 
	    { 
	        System.out.println("cs "); 
	        try { 
	            Thread.sleep(300); 
	        } 
	        catch (InterruptedException ie) { 
	        } 
	        System.out.println("engineering "); 
	    } 
	    public static void main(String[] args) 
	    { 
	        Onethread1 c1 = new Onethread1(); 
	        Onethread1 c2 = new Onethread1(); 
	        c1.start();  
	  
	        try { 
	            c1.join(); // Waiting for c1 to finish 
	        } 
	        catch (InterruptedException ie) { 
	        } 
	        c2.start(); 
	    } 
	} 

