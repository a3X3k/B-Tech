package Thread;

public class First_10 extends Thread{
	
    public void run() {
        
    	for(int i=1;i<=10;i++)
    	{
    		System.out.print(i+" ");
    	}
    }
    
	public static void main(String[] args) {

		Thread thread1 = new First_10();
		thread1.start();
		
	}
}
