package Lecture13;

public class Decrementor extends Thread{
	
	private Counter counter;

	public Decrementor(Counter c) 
	{
		counter = c;
	}
	public void run() 
	{
		for(int i=0;i<10000;i++) 
		{
			counter.decrement();
		}		
	} 
}
