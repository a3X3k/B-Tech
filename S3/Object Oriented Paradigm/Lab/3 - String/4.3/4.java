package Abhi8;
import java.lang.String;
import java.util.Scanner;
public class Driver {

	public static void main(String[] args) {
		
		String s,s1="abcdefghijklmnopqrstuvwxyz";

		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter the String : ");
		s = scan.nextLine();
		if(s.length()<26)
		{
			System.out.print("The String is not a Pangram!!");
			return;
		}
		
		s=s.toLowerCase();
		char[] ch = s.toCharArray();
		char[] ch1 = s1.toCharArray();
		
		int f=0;
		for(int i=0;i<ch1.length;i++)
		{
				f=0;
				for(int j=0;j<ch.length;j++)
				{
					if(ch1[i]==ch[j])
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					System.out.print("The String is not a Pangram!");
					return;
				}
		}
		System.out.print("The String is a Pangram!");
	}

}
