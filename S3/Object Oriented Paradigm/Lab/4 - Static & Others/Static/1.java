package Abhi10;


class Test{

	   // static variable
	   static int max = 1000;
	  
	   // non-static variable
	   int min = 1000;
	}


public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Test obj = new Test();

	       // access the non-static variable
	       System.out.println("min + 1 = " + (obj.min + 100));

	       // access the static variable
	       System.out.println("max + 1 = " + (Test.max - 100));
		
	}
}