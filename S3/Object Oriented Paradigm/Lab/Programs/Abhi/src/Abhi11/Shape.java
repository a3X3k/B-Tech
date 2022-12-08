package Abhi11;

abstract class Shape {
	
	abstract int Rectangle(int len,int bred);
	abstract int Square(int side);
	abstract double Circle(float rad);
}

class Area extends Shape{
	
	int len,bred;

	Area()
	{
		len=10;
		bred=10;
	}
	
	Area(int l,int b)
	{
		len=l;
		bred=b;
	}
	
	int Rectangle(int len,int bred)
	{
		return len*bred;
	}
	
	int Square(int side)
	{
		return side*side;
	}
	
	double Circle(float rad)
	{
		return (3.14*rad*rad);
	}
	
}
