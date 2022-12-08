package Abhi3;

import java.util.Scanner;
public class Driver {

	public static void main(String[] args) {
					
					System.out.println("!..WELCOME TO QUEUE..!");
					Scanner scan= new Scanner(System.in);
					Box obj = new Box();
					
					int choice=0,ch;

					while(choice!=1)
					{
						ch = obj.choice();
						if(ch==1)
						{
							obj.input();
						}
						else if(ch==2)
						{
							obj.print();
						}
						else if(ch==3)
						{
							obj.delete();
						}
						else if(ch==4)
						{
							obj.peep();
						}
						
						System.out.print("\nENTER 1 TO EXIT OR ANY OTHER KEY TO CONTINUE : ");
						choice=scan.nextInt();
						if(choice==1)
						{
							System.out.print("\n!..EXITED..!");
						}
					}
			}



}

