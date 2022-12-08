package Abhi9;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		System.out.println("\n\t\t\t!.. WELCOME TO TOLL MANAGEMENT ..!");

		int choice=1;
		while(choice!=0)
		{
			System.out.println("\n\t\tPRESS 1 TO ENTER THE VEHICLE DETAILS");
			System.out.println("\t\tPRESS 2 TO SEE THE TOTAL AMOUNT COLLECTED");
			System.out.println("\t\tPRESS 3 TO SEE THE NUMBER OF VEHICLES PASSED WITHOUT PAYING THE TOLL");
			System.out.println("\t\tPRESS 4 TO SEE THE NUMBER OF VEHICLES PASSED THE TOLL GATE");
			System.out.println("\t\tPRESS 5 TO SEE THE AMOUNT COLLECTED SEPERATELY");
			System.out.println("\t\tPRESS 6 TO SEE THE LOSS AMOUNT");
			System.out.println("\t\tPRESS 0 TO EXIT");
			System.out.print("\n\t\tENTER YOUR CHOICE : ");
			
			choice=scan.nextInt();
			
			if(choice==1)
			{
				Track.input();
			}
			
			else if(choice==2)
			{
				Track.tot();
			}
			
			else if(choice==3)
			{
				Track.icount();
			}
			
			else if(choice==4)
			{
				Track.count();
			}
			
			else if(choice==5)
			{
				Track.print();
			}
			
			else if(choice==6)
			{
				Track.tot1();
			}
			
			else if(choice==0)
			{
				System.out.println("\n\t\t!.. EXITED ..!");
				break;
			}
		}
		

	}

}
