package Abhi5;

import java.util.Scanner;

public class Box {
	
	String name;
	int age;
	int empid;
	String desig;
	float sal;
	
	Scanner scan=new Scanner(System.in);
	
	Box(String name1, int age1, int empid1, String desig1,float sal1)
	{
		name=name1;
		age=age1;
		empid=empid1;
		desig=desig1;
		sal=sal1;
	}
	
	void print()
	{
		System.out.print("\nEMPLOYEE ID : "+empid);
		System.out.print("\nEMPLOYEE NAME : "+name);
		System.out.print("\nEMPLOYEE AGE : "+age);
		System.out.print("\nEMPLOYEE DESIGNATION : "+desig);
		System.out.print("\nEMPLOYEE SALARY : "+sal+"\n");
		
	}
	
	void salfind()
	{
		if(desig.equalsIgnoreCase("Manager")) 
		{
			System.out.print("\nTHE EMPLOYEE WILL GET THE SALARY HIKE OF "+((0.3*sal)+sal)+"\n");
		}
		if(desig.equalsIgnoreCase("Supervisor"))
		{
			System.out.print("\nTHE EMPLOYEE WILL GET THE SALARY HIKE OF "+((0.2*sal)+sal)+"\n");
		}
		if(desig.equalsIgnoreCase("Worker"))
		{
			System.out.print("\nTHE EMPLOYEE WILL GET THE SALARY HIKE OF "+((0.1*sal)+sal)+"\n");
		}
	}

}
