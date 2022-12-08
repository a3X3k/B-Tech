package Abhi2;

import java.util.Scanner;

public class Box {
	
	Scanner scan = new Scanner(System.in);

	int arr[] = new int[15];
	
	int k=0;
	
	int choice()
	{
		System.out.println("\n!..TASKS AVAILABLE..!");
		System.out.println("\n\tPRESS 1 TO INSERT");
		System.out.println("\tPRESS 2 TO DISPLAY THE DECK");
		System.out.println("\tPRESS 3 TO DELETE THE ELEMENT");
		System.out.println("\tPRESS 4 TO DISPLAY THE PEEP");
		System.out.print("\nENTER THE CHOICE : ");
			
		int s=scan.nextInt();
		System.out.print("\nTHE ENTERED CHOICE IS : "+s+"\n");
		
		return s;
	}
	
	void input()
	{
		System.out.print("\nENTER THE ELEMENT TO INSERT : ");
		int s=scan.nextInt();
		arr[k++]=s;
	}
	
	void print()
	{
		System.out.print("\nTHE ELEMENTS IN THE STACK : ");
		for(int i=0;i<k;i++)
		{
			System.out.print(arr[i] + " ");
		}
		System.out.print("\n");
	}
	
	void delete()
	{
		arr[k-1]='\0';
		k=k-1;
	}
	
	void peep()
	{
		System.out.print("\nTHE PEEP IS : "+arr[k-1]+"\n");
	}

}
