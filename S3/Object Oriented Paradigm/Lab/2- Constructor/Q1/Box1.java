package Q1;
import java.util.Scanner;

public class Box1 {
	
		
		private double width;
		double height;
		double depth;
		
		double volume(){
			
			return (width*height*depth);
			
		}
		
		void volume1(){
			
			System.out.println("The Volume is : "+(width*height*depth));
			
		}
		
		void setDimension(double w) {
			
			Scanner obj = new Scanner(System.in);
			System.out.print("Enter the Width : ");
			w=obj.nextDouble();
			width=w;
		}
		
		Box1()
		{
			width=0;
			height=10;
			depth=10;
		}

		/*Box1(double w,double h, double d) {
			
			width=w;
			height=h;
			depth=d;
			
		}*/
}

