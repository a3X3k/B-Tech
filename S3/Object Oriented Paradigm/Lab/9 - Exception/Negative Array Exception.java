package Abhi15;

import java.util.Scanner;

public class L1 {

	public static void main(String[] args) {
		try {
			
			Scanner scan = new Scanner(System.in);
			
			System.out.print("Enter the Size of the Array : ");
			int size=scan.nextInt();
			int arr[] = new int[size];
		
			for(int i=0;i<size;i++)
			{
				System.out.print("Enter the Size of the Array : ");
				arr[i]=scan.nextInt();
			}
			
			System.out.print("The Array is : ");
			for(int i=0;i<size;i++)
			{
				System.out.print(arr[i]+" ");
			}
				
		}
		catch(NegativeArraySizeException e) {
			
			System.out.print("Oh No!! You have entered a Negative value!! --> "+e.getMessage());
		}
}
}
