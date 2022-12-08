package Thread;

public class Name extends Thread{
	
    public void run() {
    		System.out.print("S.Abhishek");
    }
    
	public static void main(String[] args) 
	{
		Thread obj1 = new Name();
		obj1.start();
	}
}
