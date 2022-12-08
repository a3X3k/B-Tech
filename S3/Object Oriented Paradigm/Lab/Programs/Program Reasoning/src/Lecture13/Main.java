package Lecture13;

public class Main {

	public static void main(String[] args) {
		
		NewThread nt = new NewThread();
		//NewThread nt1 = new NewThread();
		nt.start();
		//nt1.start();
		for (int i=0; i<1000; i++)
		{
			System.out.println("main:" + i);
		}
	}

}
