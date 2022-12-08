package Q4;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		OddEven x=new OddEven();
		Scanner inp = new Scanner(System.in); 
		//String choice="a";
		int n,choice=0;
		while(choice!=1) {
			
			System.out.print("Enter the Number : ");
			n=inp.nextInt();
			x.oddNumber(n);
			
			//inp.nextLine();
			System.out.print("Enter 1 to stop or any other key to Continue : ");
			choice=inp.nextInt();
		}
		x.tostring();
	}

}

