package Lecture13;

public class NewThread extends Thread{
	
	public void run() 
	{
		for (int i=0; i<1000; i++)
		System.out.println("NewThread:" + i);
	}

}
