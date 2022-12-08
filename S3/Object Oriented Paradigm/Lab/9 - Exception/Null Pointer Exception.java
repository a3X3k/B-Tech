package Abhi15;
import java.util.Scanner;

public class L3 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter 1 --> To Input a String or 2 --> To Pass as NULL");
		System.out.print("\n\n\tChoice : ");
		int option=scan.nextInt();
		
		if(option==1){
			System.out.print("\nEnter the String : ");
			String temp=scan.nextLine();
			String str=scan.nextLine();
			check(str);}
		else{
			check(null);}
	}
	static void check(String str){
		try {
			System.out.print("\nThe First Letter Of the String is : "+str.charAt(0));
		}
		catch(NullPointerException e){
			System.out.print("\nOh No!! You have Passed a Null String --> "+e.getMessage());
		}
		finally {
			System.out.print("\nYou have Entered Finally Block Now!!");
		}
	}
}
