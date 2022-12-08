package Q5;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		AddressBook inp = new AddressBook();
		
		Scanner obj=new Scanner(System.in);
		
		System.out.print("Enter the Name : ");
		inp.name = obj.nextLine();
		
		System.out.print("Enter the Address : ");
		inp.address = obj.nextLine();
		
		System.out.print("Enter the City : ");
		inp.city = obj.nextLine();
		
		System.out.print("Enter the State : ");
		inp.state = obj.nextLine();
		
		System.out.println("Enter the ZipCode : ");
		inp.zip = obj.nextInt();

		System.out.println("Name : " + inp.name);
		System.out.println("Address : " + inp.address);
		System.out.println("City : " + inp.city);
		System.out.println("State : " + inp.state);
		System.out.println("ZipCode : " + inp.zip);
	}

}
