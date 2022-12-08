package Thread;

public class RunnableDemo {

	public static void main(String[] args) {
		
		System.out.println("Main thread is- " + Thread.currentThread().getName()); 
		Thread t1 = new Thread(new RunnableDemo().new RunnableImpl()); 
		t1.start(); 
	}
	
	private class RunnableImpl implements Runnable { 
		  
        public void run() 
        { 
            System.out.println(Thread.currentThread().getName() + ", executing run() method!"); 
        } 
    } 

}
