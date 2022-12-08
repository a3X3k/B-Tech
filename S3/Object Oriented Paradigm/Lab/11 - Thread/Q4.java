package Thread;

class printCount{
	
	synchronized public void count()
	{
		//Roll Number is 47. 
		//Last Digit is 7.
		for(int i=1;i<9;i++)
		{
			System.out.print(i);
			try {
				Thread.sleep(100);
			} catch (InterruptedException e) {
				
				e.printStackTrace();
			}
		}
		System.out.println();
	}

}

class ThreadDemo extends Thread{
	
	private Thread t;
	private String ThreadName;
	printCount P;
	
	ThreadDemo(printCount t2,String ThreadName)
	{
		P=t2;
		this.ThreadName=ThreadName;
		start();
	}
	
	public void run()
	{
		P.count();
	}
}


public class Q4 {

	public static void main(String[] args) {
		
		printCount t= new printCount();
		ThreadDemo t1=new ThreadDemo(t,"Thread 1");
		ThreadDemo t2=new ThreadDemo(t,"Thread 2");
	}

}
