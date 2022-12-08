package Abhi6;

public class Driver {

	public static void main(String[] args) {
		
		Shipment shipment1 = new Shipment(10, 20, 15, 5000, 10000,"Kollam","AAA Agency");
		Shipment shipment2 = new Shipment(10, 40, 10, 10000, 10000,"Mumbai","Amrita");
		double vol;
		
		vol = shipment1.volume();
		System.out.println("Volume of shipment1 is " + vol);
		System.out.println("Weight of shipment1 is "+ shipment1.weight);
		System.out.println("Shipping cost: $" + shipment1.cost);
		System.out.println("Recipient : " + shipment1.recipient);
		System.out.println("Address : " + shipment1.Address);
		System.out.println("Total Shipping cost: $" +shipment1.ship());
		System.out.println();
		
		vol = shipment2.volume();
		System.out.println("Volume of shipment2 is " + vol);
		System.out.println("Weight of shipment2 is "+ shipment2.weight);
		System.out.println("Shipping cost: $" + shipment2.cost);
		System.out.println("Recipient : " + shipment2.recipient);
		System.out.println("Address : " + shipment2.Address);
		System.out.println("Total Shipping cost: $" +shipment2.ship());
		
		Shipment shipment3 = new Shipment();
		System.out.println("\nTotal Shipping cost: $" +shipment3.ship());
		System.out.println("\nShipping Details : ");
		shipment3.details();

	}

}
