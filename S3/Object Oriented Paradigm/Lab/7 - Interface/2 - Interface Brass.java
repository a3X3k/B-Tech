package Abhi13;

public class Brass extends Wind{
	
	int hours;
	int min;
	int sec;
	
	Brass()
	{
		hours=04;
		min=30;
		sec=00;
	}
	
	Brass(int hours,int min,int sec)
	{
		this.hours=hours;
		this.min=min;
		this.sec=sec;
	}
	
	int gethours()
	{
		return hours;
	}
	
	int getmin()
	{
		return min;
	}
	
	int getsec()
	{
		return sec;
	}
	
}
