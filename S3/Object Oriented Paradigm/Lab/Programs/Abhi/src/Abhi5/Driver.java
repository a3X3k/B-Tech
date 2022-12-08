package Abhi5;
import java.util.Scanner;


public class Driver {

	public static void main(String[] args) {
		
		Scanner scan=new Scanner(System.in);
		System.out.print("\t\tWELCOME TO EMPLOYER MANAGEMENT SYSTEM");
		int choice = 1,i=0;
		
		Box[] obj=new Box[10];
		while(choice!=0)
		{
			System.out.println("\n!..TASKS AVAILABLE..!");
			System.out.println("\n\tPRESS 1 TO ADD EMPLOYEE DETAILS");
			System.out.println("\tPRESS 2 TO DISPLAY THE EMPLOYEE DETAILS");
			System.out.println("\tPRESS 3 TO CALCULATE THE SALARY HIKE");
			System.out.println("\tPRESS 4 TO SEARCH AN EMPLOYEE");
			System.out.println("\tPRESS 0 TO EXIT");
			System.out.print("\nENTER THE CHOICE : ");
				
			choice=scan.nextInt();
			System.out.print("\nTHE ENTERED CHOICE IS : "+choice+"\n");
			
			if(choice==1)
			{
				System.out.print("\nENTER THE EMPLOYEE ID : ");
				int empid=scan.nextInt();
				System.out.print("\nENTER THE NAME : ");
				String name=scan.nextLine();
				name=scan.nextLine();
				System.out.print("\nENTER THE AGE : ");
				int age=scan.nextInt();
				System.out.print("\nENTER THE DESIGNATION : ");
				String desig=scan.nextLine();
				desig=scan.nextLine();
				System.out.print("\nENTER THE SALARY : ");
				float sal=scan.nextFloat();
				obj[i++]= new Box(name,age,empid,desig,sal);
			}
			else if(choice==2)
			{
				for(int j=0;j<i;j++)
				{
					obj[j].print();
				}
			}
			else if(choice==3)
			{
				System.out.print("\nENTER THE EMPLOYEE ID TO CALCULATE THE SALARY HIKE : ");
				int id=scan.nextInt();
				for(int j=0;j<i;j++)
				{
					if(obj[j].empid==id)
					{
						obj[j].salfind();
						break;
					}
				}
			}
			else if(choice==4)
			{
				System.out.print("\nENTER THE EMPLOYEE ID TO SEARCH IN THE DATABASE : ");
				int id=scan.nextInt();
				int f=0;
				for(int j=0;j<i;j++)
				{
					if(obj[j].empid==id)
					{
						f=1;
						System.out.print("\nTHE EMPLOYEE DATA IS FOUND : \n");
						obj[j].print();
						break;
					}
				}
				if(f==0)
				{
					System.out.print("\nTHE EMPLOYEE DATA IS NOT FOUND");
				}
			}
			else if(choice==0)
			{
				System.out.print("\n!...THANKYOU...!");
				break;
			}
		}

	}

}
