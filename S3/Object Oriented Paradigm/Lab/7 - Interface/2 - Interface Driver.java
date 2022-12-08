package Abhi13;

public class Driver {

	public static void main(String[] args) {
		
		Wind obj1 = new Wind();
		
		obj1.adjust();
		obj1.play();
		System.out.println("The Instrument is "+obj1.what()+"\n");
		
		Percussion obj2 = new Percussion();
		
		obj2.adjust();
		obj2.play();
		System.out.println("The Instrument is "+obj2.what()+"\n");
		
		Stringed obj3 = new Stringed();
		
		obj3.adjust();
		obj3.play();
		System.out.println("The Instrument is "+obj3.what()+"\n");
		
		Woodwind obj4 = new Woodwind();
		
		obj4.adjust();
		obj4.play();
		System.out.println("The Instrument is "+obj4.what()+"\n");
		
		Woodwind obj5 = new Woodwind(100,"Mumbai");
		System.out.println("The Speed of the Wind is "+obj5.getSpeed());
		System.out.println("The Location is "+obj5.getLocation()+"\n");
		
		Brass obj6 = new Brass(11,59,59);
		
		obj6.adjust();
		obj6.play();
		System.out.println("The Instrument is "+obj6.what());
		System.out.println("The Time of Measuring is "+obj6.gethours()+"."+obj6.getmin()+"."+obj6.getsec());
	}

}
