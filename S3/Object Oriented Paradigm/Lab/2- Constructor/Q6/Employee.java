package Q6;

public class Employee {
	
	int id;
	String name;
	double salary;
	
	String getname() {
		
		return name;
	}
	
	double getsalary() {
		
		return salary;
	}
	
	Employee(){
		
		id=1;
		name="Abhi";
		salary=100000;
	}
	
	Employee(String n,double s){
		
		id=1;
		name=n;
		salary=s;
	}
	
	void raisesalary(int r) {
		
		double temp=(salary*r)/100;
		salary=salary+temp;
	}

}
