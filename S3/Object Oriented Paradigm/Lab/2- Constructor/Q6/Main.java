package Q6;

public class Main {

	public static void main(String[] args) {
		
		Employee emp1=new Employee();
		
		System.out.println("Default Constructor : ");
		System.out.println("The Name is : " + emp1.getname());
		System.out.println("The Salary is : "+ emp1.getsalary());
		
		Employee emp2=new Employee("S.Abhishek", 550000);
		
		System.out.println("\nParameterized Constructor : ");
		System.out.println("The Name is : " + emp2.getname());
		System.out.println("The Salary is : "+ emp2.getsalary());
		
		emp2.raisesalary(10);
		
		System.out.println("\nThe Name is : " + emp2.getname());
		System.out.println("The Updated Salary is : "+ emp2.getsalary());
		
	}

}
