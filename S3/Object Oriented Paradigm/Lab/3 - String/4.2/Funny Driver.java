
package Abhi;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the String to Find funny or not : ");
		String s= scan.nextLine();
		
		Box obj=new Box();
		String s1=obj.reverse(s);
		
		int arr1[],l=s.length();    
		arr1 = new int[l];
		arr1=obj.ascii(s, l);

		int arr2[]; 
		arr2 = new int[l];
		arr2=obj.ascii(s1, l);

		String d1=obj.diff1(s, l);
		String d2=obj.diff(s1, l);
		
		
		if(d1.equals(d2))
		{
			System.out.println("The String is Funny!!");
		}
		else
		{
			System.out.println("The String is Not Funny!!");
		}

	}

}


