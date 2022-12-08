package Abhi1;
import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		
		System.out.print("Enter limit : ");
		Scanner in = new Scanner(System.in);  
		int size=in.nextInt();
		Box myobj=new Box(size);
        myobj.Display();
        myobj.sumOdd();
	}

}
