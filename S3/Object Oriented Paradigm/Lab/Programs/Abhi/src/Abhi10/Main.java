package Abhi10;

public class Main {

	public static void main(String[] args) {
		
		A obj1=new A();
		B obj2=new B();
		
		A obj11=new A(90,98,96);
		B obj22=new B(90,98,96,99);
		
		System.out.println("The Marks of Student 1 : "+obj1.getper()+" %");
		System.out.println("The Marks of Student 2 : "+obj2.getper()+" %");
		
		System.out.println("\nThe Marks of Student 1 : "+obj11.getper()+" %");
		System.out.println("The Marks of Student 2 : "+obj22.getper()+" %");
	}

}
