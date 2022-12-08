package Abhi14;

public class Invoice {

	private String part_No="A101";
	private String part_Des="Engine";
	private int quantity=5;
	private double price_per_item=20000;
	
	public String get_Part_No()
	{
		return part_No;
	}
	
	public String get_Part_Des()
	{
		return part_Des;
	}
	
	public int getQuan()
	{
		return quantity;
	}
	
	public double get_price()
	{
		return price_per_item;
	}
	
	public double gettot()
	{
		return quantity*price_per_item;
	}
	
	public void display()
	{
		System.out.println("Part Number : "+part_No);
		System.out.println("Part Description : "+part_Des);
		System.out.println("Quantity : "+quantity);
		System.out.println("Price Per Item : "+price_per_item);
	}
}
