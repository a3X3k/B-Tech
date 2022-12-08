package Abhi13;

public class Woodwind extends Wind{
	
	int speed;
	String location;
	
	Woodwind()
	{
		speed=100;
		location="India";
	}
	
	Woodwind(int speed,String location)
	{
		this.speed=speed;
		this.location=location;
	}
	
	int getSpeed()
	{
		return speed;
	}
	
	String getLocation()
	{
		return location;
	}

}
