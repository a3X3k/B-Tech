package Lecture13;

public class CounterTest {

	public static void main(String[] args) {
		
		System.out.println("Main started");
		Counter c = new Counter();
		Incrementor i = new Incrementor(c);
		Decrementor d = new Decrementor(c);
		i.start();
		d.start();
		System.out.println("Main ended");
	}

}
