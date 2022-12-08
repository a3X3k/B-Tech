package Gen;

public class Gen_Method {

	public static void main(String[] args) {

		 // initialize the class with Integer data
	    DemoClass demo = new DemoClass();

	    // generics method working with String
	    demo.<String>genericsMethod("Java Programming");

	    // generics method working with integer
	    demo.<Integer>genericsMethod(25);

	}
}

class DemoClass 
{
	  // create a generics method
	  public <T> void genericsMethod(T data) 
	  {
		  System.out.println("Generics Method:");
		  System.out.println("Data Passed: " + data);
	  }
}



