package Q1;

public class Box {
	
		
		double width;
		double height;
		double depth;
		
		double volume(){
			
			return (width*height*depth);
			
		}
		
		void volume1(){
			
			System.out.println("The Volume is : "+(width*height*depth));
			
		}
		
		void setDimension(double w,double h, double d) {
			
			width=w;
			height=h;
			depth=d;
			
		}
		
		Box()
		{
			width=2;
			height=2;
			depth=2;
		}

		Box(double w,double h, double d) {
			
			width=w;
			height=h;
			depth=d;
			
		}
}
