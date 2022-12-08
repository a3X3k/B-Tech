package Abhi6;

import java.lang.String;
import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		
		String s,s1="";

		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter the String : ");
		s = scan.nextLine();
		System.out.print("\n");
		
		char[] ch = s.toCharArray();
		
		for(int i=ch.length-1;i>=0;i--)
		{
			s1+=ch[i];
		}
		
		if(s.equals(s1))
		{
			System.out.print("It's a Palindrome!!");
		}
		else
		{
			System.out.print("It's not a Palindrome!!");
		}
	}

}
