package Vector;
import java.util.*;  

class Book3 {  
int id;  
String name,author,publisher;  
int quantity;  

public Book3(int id, String name, String author, String publisher, int quantity) 
{  
    this.id = id;  
    this.name = name;  
    this.author = author;  
    this.publisher = publisher;  
    this.quantity = quantity;  
}  
}  

public class Linkhash {
	public static void main(String[] args) {
		
		LinkedHashSet<Book3> hs=new LinkedHashSet<Book3>();  
	    //Creating Books  
	    Book3 b1=new Book3(101,"Let us C","Yashwant Kanetkar","BPB",8);  
	    Book3 b2=new Book3(102,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);  
	    Book3 b3=new Book3(103,"Operating System","Galvin","Wiley",6);  
	    //Adding Books to hash table  
	    hs.add(b1);  
	    hs.add(b2);  
	    hs.add(b3);  
	    //Traversing hash table  
	    for(Book3 b:hs){  
	    System.out.println(b.id+" "+b.name+" "+b.author+" "+b.publisher+" "+b.quantity);  
	}
	}
}
