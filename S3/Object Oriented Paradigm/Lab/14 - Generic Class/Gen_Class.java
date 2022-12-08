package Gen;
public class Gen_Class {
	public static void main(String[] args) {

		// initialize generic class
	    // with Integer data
	    GenericsClass<Integer> intObj = new GenericsClass<>(5);
	    System.out.println("Generic Class returns: " + intObj.getData());

	    // initialize generic class
	    // with String data
	    GenericsClass<String> stringObj = new GenericsClass<>("Java Programming");
	    System.out.println("Generic Class returns: " + stringObj.getData());
	}
}

class GenericsClass<T> {

	  // variable of T type
	  private T data;

	  public GenericsClass(T data) {
	    this.data = data;
	  }

	  // method that return T type variable
	  public T getData() {
	    return this.data;
	  }
}
