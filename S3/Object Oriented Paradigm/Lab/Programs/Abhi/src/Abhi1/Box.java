package Abhi1;
import java.util.Scanner;

public class Box {
	
	int[]myList;
	int sum=0;
	Box(int size)
	{
		myList=new int[size];
		Scanner in = new Scanner(System.in);  
		System.out.print("Enter the elements : ");
		for (int i=0; i<size; i++)
	      {
	    	  myList[i] = in.nextInt();
	      }
	}
	void Display() {
		System.out.print("The Elements are : ");
		for(int i=0; i < myList.length; i++) 
		    System.out.print(myList[i]+" "); }
	
	void sumOdd()
	{
		for(int i=0; i < myList.length; i++) {
			if((myList[i]%2)!=0)
			{
				sum=sum+myList[i];
			} }
		System.out.print("\nThe Sum of the Odd Elements are : "+sum);
	}
}
