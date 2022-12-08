package Abhi3;
import java.util.Scanner;
public class Driver {

	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);  
		System.out.print("Enter Row of the matrix : ");
		int row=in.nextInt();
		
		System.out.print("Enter column of the matrix : ");
		int col=in.nextInt();
		
		Box myobj=new Box(row,col);
        myobj.Display(row,col);
        myobj.diag(row,col);
	}

}

