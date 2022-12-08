package Abhi3;
import java.util.Scanner;
public class Box {
	
	int[][] intArray; 
	Box(int row,int col)
	{
		intArray= new int[row][col];
		Scanner in = new Scanner(System.in);  
		System.out.print("Enter the elements : ");
		for (int i=0; i<row; i++)
		{
			for (int j=0; j<col; j++)
			{
				intArray[i][j] = in.nextInt();
			}
		}
	}
	void Display(int row,int col)
	{
		System.out.print("\nThe Matrix is : \n");
		for (int i=0; i<row; i++)
	    {
			System.out.print("\t\t");
			for (int j=0; j<col; j++)
		    {
				System.out.print(intArray[i][j]+" ");
		    }
			System.out.println(" ");
	    }
	}
	
	void diag(int row,int col)
	{
		int sum = 0;
		int j=col-1;
		for (int i=0;i<row; i++)
		{
				sum=sum+intArray[i][j];
				j--;
		}
		System.out.println("\nThe Sum of the Diagonal Element of the Matrix is "+sum);
	}
}
