package Abhi13;

public class Wind implements Instrument {
	
	public void play()
	{
		System.out.println("The Speed of the Wind is 50 Kms/Hr");
	}
	
	public String what()
	{
		String name="Wind Mill Anemometer";
		return name;
	}

	public void adjust()
	{
		System.out.println("The Instrument is adjusted to measure the Wind Speed of upto 100 Kms/Hr");
	}

}