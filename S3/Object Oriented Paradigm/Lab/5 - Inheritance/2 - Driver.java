package Abhi7;

public class Driver {

	public static void main(String[] args) {
		
			Vehicle obj1=new Vehicle("BMW","KL-40069","Z1",4,20,"Black");
	
			System.out.println("Vehicle Make : "+ obj1.Make());
			System.out.println("Vehicle Model : "+ obj1.model());
			System.out.println("Vehicle Color : "+ obj1.color());
			
			Road obj2=new Road("BENZ","KL-40009","S",4,25,"Dark Blue",7000000,5000000);
			
			System.out.println("\nVehicle Make : "+ obj2.Make());
			System.out.println("Vehicle Model : "+ obj2.model());
			System.out.println("Vehicle Color : "+ obj2.color());
			System.out.println("Vehicle OnRoad Price : "+ obj2.on());
			System.out.println("Vehicle OffRoad Price : "+ obj2.off());
			
			FourWheel obj3 = new FourWheel();
			System.out.println("\nEngine Price : "+obj3.engprice());
			System.out.println("Body Price : "+obj3.bodyprice());
			
			TwoWheel obj4 = new TwoWheel();
			System.out.println("\nVehicle Make : "+ obj4.Make());
			System.out.println("Vehicle Model : "+ obj4.model());
			System.out.println("Vehicle Color : "+ obj4.color());
			System.out.println("Engine Price : "+obj4.engprice());
			System.out.println("Body Price : "+obj4.bodyprice());
			System.out.println("Fuel Tank Capacity : "+obj4.fcap());
			
			WaterBourne obj5 = new WaterBourne();
			System.out.println("\nVessel Name : "+obj5.name);
			System.out.println("Vessel Passenger Capacity : "+ obj5.pass_capacity);
			System.out.println("Vessel Mileage : "+obj5.Mileage());
			System.out.println("Vessel Color : "+obj5.color());
			
			OceanVessel obj6 = new OceanVessel("BMW","KL-40069","Z1",4,20,"Black","Luxury",50,"Passenger");
			System.out.println("\nVessel Name : "+obj6.name);
			System.out.println("Vessel Passenger Capacity : "+ obj6.pass_capacity);
			System.out.println("Vessel Mileage : "+obj6.Mileage());
			System.out.println("Vessel Type : "+obj6.type);
			
			CoastVessel obj7 = new CoastVessel("BMW","KL-40069","Z1",4,20,"Black","Cargo",50,"Passenger",10000,"INDIA");
			System.out.println("\nVessel Name : "+obj7.name);
			System.out.println("Vessel Capacity : "+obj7.capacity);
			System.out.println("Vessel Origin : "+obj7.origin);
	}

}
