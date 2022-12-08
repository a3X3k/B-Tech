package Abhi14;

public abstract class Employee implements Payable {
	
	String firstName;
	String lastName;
	private String socialSecurityNumber;
	
	Employee()
	{
		firstName="Abhi";
		lastName="Shek";
		socialSecurityNumber="19147";
	}
	
	Employee(String f,String l,String no)
	{
		firstName=f;
		lastName=l;
		socialSecurityNumber=no;
	}
	
	public String get_Fname()
	{
		return firstName;
	}
	
	public String get_Lname()
	{
		return lastName;
	}
	
	public String get_Sec_No()
	{
		return socialSecurityNumber;
	}
	
	public void display()
	{
		System.out.println("First Name : "+firstName);
		System.out.println("Last Name :"+lastName);
		System.out.println("Social Security Number : "+socialSecurityNumber);
	}

}
