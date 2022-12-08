package Abhi;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);  
		System.out.print("Enter limit : ");
		int size=in.nextInt();
		int[] myList=new int[size];
		System.out.print("Enter the elements : ");
		
		for (int i=0; i<size; i++)
	      {
	    	  myList[i] = in.nextInt();
	      }
		System.out.print("Display the array : ");  
		
		for(int i=0; i < myList.length; i++) 
		    System.out.print(myList[i]);
		
		 int j=0,sum=0;
		  
	     for( int num : myList) 
	     {
	    	  //System.out.println(myList[j]);
	          sum = sum+num;
	      }
	      System.out.print("\nSum : "+sum);
	}
}
