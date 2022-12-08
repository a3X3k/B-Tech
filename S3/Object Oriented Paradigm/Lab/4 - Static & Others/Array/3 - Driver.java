package Abhi2;

import java.util.Scanner;

public class Driver {

	public static void main(String[] args) {
		System.out.print("Enter No of students : ");
		Scanner in = new Scanner(System.in);  
		int size=in.nextInt();
		Box[] myobj=new Box[size];
		
		int R,M1,M2,M3;
		String S;
		int[] roll=new int[size];
		int[] roll1=new int[size];
		for (int i=0;i<size;i++)
		{    
		    System.out.print("\nEnter The Student Details :\n");
		    System.out.print("Enter the Roll Number of the Student : ");
		    R = in.nextInt();
		    roll[i]=R;
		    System.out.print("Enter the Name of the Student  : ");
		    S = in.nextLine();
		    S = in.nextLine();
		    System.out.print("Enter the Mark 1 out of 50 : ");
		    M1 = in.nextInt();
		    System.out.print("Enter the Mark 2 out of 50 : ");
		    M2 = in.nextInt();
		    System.out.print("Enter the Mark 3 out of 50 : ");
		    M3 = in.nextInt();
		    myobj[i]= new Box(R,S,M1,M2,M3);
		   
		}   
		for(int i=0; i < roll.length; i++) 
		    roll1[i]=roll[i];
		for (int i = 0; i < size; i++) 
        {
            for (int j = i + 1; j < size; j++) { 
                if (roll[i] > roll[j]) 
                {
                    int temp = roll[i];
                    roll[i] = roll[j];
                    roll[j] = temp;
                }
            }
        }
		int j;
		System.out.print("\nDisplay Student Details in Roll Number wise :\n\n");
		for (int i=0;i<size;i++)
		{	
			int temp = roll[i];
			for (j = 0; j < size;j++) 
			{
				if(temp==roll1[j])
				{
					break;
				}
			}
		    myobj[j].ShowData();
		    myobj[j].marks();
		}
	}
}
