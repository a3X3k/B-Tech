package Abhi9;


public class Driver {
	
	public static void main(String[] args) {

	Rectangle obj1 = new Rectangle(8,8);
	
	Square obj2 = new Square(5,5,5);
	
	Rectangle ref;
	
	ref = obj1;
	
	System.out.println("The Area of the Rectangle is : "+ref.area());
	System.out.println("The Perimeter of the Rectangle is : "+ref.perimeter());
	
	ref = obj2;
	
	System.out.println("The Area of the Square is : "+ref.area());
	System.out.println("The Perimeter of the Square is : "+ref.perimeter());
	
	
	}
}
