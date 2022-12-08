package Package1;

public class Rectangle extends Shape{
	
	int width;
	int height;
	
	Rectangle(int w,int h)
	{
		width=w;
		height=h;
	}
	
	public void area()
	{
		System.out.println("The Area Of Rectangle is : "+width*height);
		System.out.println("The Perimeter Of Rectangle is : "+2*(width+height));
		System.out.println("No Of Sides : "+side);
	}

}

