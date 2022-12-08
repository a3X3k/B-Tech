package Thread;

public class Name_using_Runnable {

	public static void main(String[] args) {
		
		Thread t1 = new Thread(new Name_using_Runnable().new RunnableImpl()); 
		t1.start(); 
	}
	
	private class RunnableImpl implements Runnable { 
		  
        public void run() 
        { 
            System.out.println("S.Abhishek"); 
        } 
    } 

}
