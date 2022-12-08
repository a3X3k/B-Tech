package Vector;
import java.util.*;

public class Tree {

	public static void main(String[] args) {
		
		TreeSet<Integer> set=new TreeSet<Integer>();  
        set.add(24);  
        set.add(66);  
        set.add(12);  
        set.add(15);  
        //example of traversing elements in descending order.
        Iterator i=set.descendingIterator();  
        while(i.hasNext())  
        {  
            System.out.println(i.next());  
        }
        //retrieve and remove the highest and lowest Value.
        System.out.println("Lowest Value: "+set.pollFirst());  
        System.out.println("Highest Value: "+set.pollLast()); 
        System.out.println("Initial Set: "+set); 
        
        //perform various NavigableSet operations.
        TreeSet<String> set2=new TreeSet<String>();  
        set2.add("A");  
        set2.add("B");  
        set2.add("C");  
        set2.add("D");  
        set2.add("E");  
        
        System.out.println("Reverse Set: "+set2.descendingSet());      
        System.out.println("Head Set: "+set2.headSet("C", true));  
        System.out.println("SubSet: "+set2.subSet("A", false, "E", true));    
        System.out.println("TailSet: "+set2.tailSet("C", false));  
	}
}
