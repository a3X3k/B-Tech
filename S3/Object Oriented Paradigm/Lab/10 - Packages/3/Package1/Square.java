package Package1;

public class Square extends Shape {
	
	int length_of_side;
	
	Square(int len)
	{
		length_of_side=len;
	}
	
	public void area()
	{
		System.out.println("The Area Of Square is : "+length_of_side*length_of_side);
		System.out.println("The Perimeter Of Square is : "+4*length_of_side);
		System.out.println("No Of Sides : "+side);
	}

}
