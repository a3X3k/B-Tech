package Abhi7;

import java.lang.String;
import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		
		String s,s1="";

		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter the String : ");
		s = scan.nextLine();
		System.out.print("The String is : "+s);
		System.out.print("\n");
		
		char[] ch = s.toCharArray();
		for(int i=0;i<ch.length;i++)
		{
			if(ch[i]>64 && ch[i]<= 90 || ch[i]>96 && ch[i]<=122)
			{
				s1+=ch[i];
			}
			
		}
		
		System.out.print("The String is : "+s1);
	}

}
