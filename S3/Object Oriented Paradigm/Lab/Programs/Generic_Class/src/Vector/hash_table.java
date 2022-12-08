package Vector;
import java.util.*;  

public class hash_table {

	public static void main(String[] args) {
		
		Hashtable<Integer,String> map=new Hashtable<Integer,String>();        
	     map.put(100,"Amit");    
	     map.put(102,"Ravi");   
	     map.put(101,"Vijay");    
	     map.put(103,"Rahul");    
	     System.out.println("Before remove: "+ map);    
	       // Remove value for key 102  
	       map.remove(102);  
	       System.out.println("After remove: "+ map);  
	     //Here, we specify the if and else statement as arguments of the method  
	       System.out.println(map.getOrDefault(101, "Not Found"));  
	       System.out.println(map.getOrDefault(105, "Not Found"));  
	     //Inserts, as the specified pair is unique  
	       map.putIfAbsent(104,"Gaurav");  
	       System.out.println("Updated Map: "+map);  
	       //Returns the current value, as the specified pair already exist  
	       map.putIfAbsent(101,"Vijay");  
	       System.out.println("Updated Map: "+map);  


	}

}
