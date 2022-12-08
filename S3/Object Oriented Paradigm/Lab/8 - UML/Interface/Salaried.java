package Abhi14;

public class Salaried extends Employee{
	
	double sal=15000;
	int weeks=2;
	
	Salaried(String f,String l,String no,double sal1,int weeks1)
	{
		super(f,l,no);
		sal=sal1;
		weeks=weeks1;
	}
	public double getPaymentAmount() 
	{
		return sal*weeks;
	}
	
	public void display()
	{
		System.out.println("First Name : "+firstName);
		System.out.println("Last Name :"+lastName);
		System.out.println("Social Security Number : "+get_Sec_No());
		System.out.println("Salary of the Employee in a Month: "+getPaymentAmount());
	}

}
