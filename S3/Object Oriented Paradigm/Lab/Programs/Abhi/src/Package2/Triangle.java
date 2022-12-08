package Package2;

public class Triangle extends Package1.Shape{
	
	float breadth;
	float height;
	
	Triangle(float b,float h)
	{
		breadth=b;
		height=h;
	}
	
	public void area()
	{
		System.out.println("The Area Of Triangle is : "+(breadth*height)/2.0);
	}
	
	public void perimeter(int a,int b,int c)
	{
		System.out.println("The Perimeter Of Triangle is : "+(a+b+c));
		System.out.println("No Of Sides : "+(side-1));
	}

}

