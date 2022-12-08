package Collection;
import java.util.*; 
public class Iterator {

	public static void main(String[] args) {
		
		ArrayList<String> list = new ArrayList<String>(); 

	     list.add("A"); 
	     list.add("B"); 
	     list.add("C"); 
	     list.add("D"); 
	     list.add("E"); 

	     // Iterator to traverse the list 
	     java.util.Iterator<String> iterator = list.iterator(); 

	     System.out.println("List elements : "); 

	     while (iterator.hasNext()) 
	         System.out.print(iterator.next() + " "); 

	     System.out.println(); 

	}

}
