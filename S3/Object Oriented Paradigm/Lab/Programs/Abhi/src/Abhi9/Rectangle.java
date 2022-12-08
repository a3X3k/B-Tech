package Abhi9;

class Rectangle {
	
	int length;
	int breadth;
	
	int area()
	{
		return length*breadth;
	}
	
	int perimeter()
	{
		return 2*(length+breadth);
	}
	
	Rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	
	Rectangle()
	{
		length=10;
		breadth=10;
	}
}

class Square extends Rectangle {
	
	int side; 
	
	Square()
	{
		super();
	}
	
	Square(int l,int b,int s)
	{
		super(l,b);
		side=s;
	}
	
	int area()
	{
		return side*side;
	}
	
	int perimeter()
	{
		return 4*side;
	}

}