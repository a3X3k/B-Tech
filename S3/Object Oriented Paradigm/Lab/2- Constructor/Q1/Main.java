package Q1;

public class Main {

	public static void main(String[] args) {
		
		Box mybox=new Box();
		mybox.width=10;
		mybox.height=10;
		mybox.depth=10;
		
		double vol=mybox.volume();
		System.out.println("The Volume is : "+vol);
		
		mybox.volume1();
		
		vol=mybox.volume();
		System.out.println("The Volume is : "+vol);
		
		mybox.setDimension(1,10,10);
		System.out.println("The Volume is : "+mybox.volume());
		
		Box mybox1=new Box();
		System.out.println("The Volume is : "+mybox1.volume());
		
		Box mybox2=new Box(10,10,10);
		System.out.println("The Volume is : "+mybox2.volume());
		
		Box1 mybox3 = new Box1();
		mybox3.setDimension(10);
		mybox3.height=10;
		mybox3.depth=10;
		System.out.println("The Volume is : "+mybox3.volume());
		
	}

}
