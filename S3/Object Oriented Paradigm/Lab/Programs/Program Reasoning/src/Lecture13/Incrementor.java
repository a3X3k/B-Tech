package Lecture13;

public class Incrementor extends Thread{
	
	private Counter counter;

	public Incrementor(Counter c) {

		counter = c;
	}

	public void run() 
	{
		for(int i=0;i<10000;i++)
		{
			counter.increment();
		} 
	}
}
