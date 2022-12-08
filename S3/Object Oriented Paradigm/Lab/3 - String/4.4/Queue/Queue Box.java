package Abhi3;

import java.util.Scanner;

public class Box {
	
	Scanner scan = new Scanner(System.in);

	int arr[] = new int[15];
	
	int k=0;
	
	int choice()
	{
		System.out.println("\n!..TASKS AVAILABLE IN THE CAR DATABASE..!");
		System.out.println("\n\tPRESS 1 TO REGISTER");
		System.out.println("\tPRESS 2 TO DISPLAY THE QUEUE");
		System.out.println("\tPRESS 3 TO DELETE THE CAR");
		System.out.println("\tPRESS 4 TO FIND THE NEXT CAR IN THE QUEUE");
		System.out.print("\nENTER THE CHOICE : ");
			
		int s=scan.nextInt();
		System.out.print("\nTHE ENTERED CHOICE IS : "+s+"\n");
		
		return s;
	}
	
	void input()
	{
		System.out.print("\nENTER THE CAR NUMBER TO INSERT : ");
		int s=scan.nextInt();
		arr[k++]=s;
	}
	
	void print()
	{
		if(k>0)
		{
			System.out.print("\nTHE CAR'S IN THE QUEUE : ");
			for(int i=0;i<k;i++)
			{
				System.out.print(arr[i] + " ");
			}
			System.out.print("\n");
		}
		else
		{
			System.out.print("\nTHERE IS NO CAR IN THE QUEUE\n");
		}
		
	}
	
	void delete()
	{
		for(int i=0;i<k;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[k-1]='\0';
		k--;
	}
	
	void peep()
	{
		System.out.print("\nTHE NEXT CAR IN THE QUEUE IS : "+arr[0]+"\n");
	}


}
