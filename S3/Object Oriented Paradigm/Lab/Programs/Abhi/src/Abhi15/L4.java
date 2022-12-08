package Abhi15;
import java.util.Scanner;

class weightChecker extends Exception{
	
	weightChecker(String s){
		
		super(s);
	}
}

public class L4 {
	public static void main(String[] args) {
		try {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the Weight of the Product : ");
		float weight=scan.nextFloat();
		productCheck(weight);
	}
	catch(Exception e){
		System.out.print("The Thrown Exception is : "+e.getMessage());	
	}	}
	static void productCheck(float weight) throws weightChecker {
		if(weight<100){
			throw new weightChecker("It's an Invalid Product");}
		else{
			System.out.print("\nIt's a Valid Product!!");}
	}
}
