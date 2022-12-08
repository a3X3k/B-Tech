package Abhi5;
import java.lang.String;
import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		
		String s1,s2,s3="";

		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter the String 1 : ");
		s1 = scan.nextLine();
		
		System.out.print("Enter the String 2 : ");
		s2 = scan.nextLine();
		
		System.out.print("\n");
		
		System.out.println("String 1 : "+s1);
		System.out.println("String 2 : "+s2);
		System.out.print("\n");
		
		System.out.print("Enter the Length : ");
		int l = scan.nextInt();
		
		System.out.println("Length : "+l);
		System.out.print("\n");
		
		char[] ch = s1.toCharArray(); 
		
		for(int i=0;i<l;i++)
		{
			s3+=ch[i];
		}
		
		char[] ch1 = s2.toCharArray();
		for(int i=l-1;i<ch1.length;i++)
		{
			s3+=ch1[i];
		}
		
		System.out.println("The String is : "+s3);
	}

}
