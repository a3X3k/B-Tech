package Abhi6;

public class Box {
	
	//Extend BoxWeight to include shipping costs.
	//Start with Box.
	private double width;
	private double height;
	private double depth;
	String recipient="AVR Agency";
	//construct clone of an object
	Box(Box ob) { // pass object to constructor
		width = ob.width;
		height = ob.height;
		depth = ob.depth;
		recipient=ob.recipient;
	}
	
	//constructor used when all dimensions specified
	Box(double w, double h, double d) {
		width = w;
		height = h;
		depth = d;
	}
	
	// constructor used when no dimensions specified
	Box() {
		width = -1; // use -1 to indicate
		height = -1; // an uninitialized
		depth = -1; // box
		recipient="AAR Agency";
	}
	
	// constructor used when cube is created
	Box(double len) {
		width = height = depth = len;
	}
	
	// compute and return volume
	double volume() {
		return width * height * depth;
	}
}


class BoxWeight extends Box {// Add weight.
	
	double weight; // weight of box
	double shippingcost=1000;
	String Address="Kochi";
	// construct clone of an object
	BoxWeight(BoxWeight ob) { // pass object to constructor
		super(ob);
		weight = ob.weight;
		shippingcost=ob.shippingcost;
		Address=ob.Address;
	}
	
	// constructor when all parameters are specified
	BoxWeight(double w, double h, double d, double m,double c) {
		super(w, h, d); // call superclass constructor
		weight = m;
		shippingcost=c;
	}
	
	// default constructor
	BoxWeight() {
		super();
		weight = -1;
	}
	
	//constructor used when cube is created
	BoxWeight(double len, double m,double c) {
		super(len);
		weight = m;
		shippingcost=c;
	}
}

	
class Shipment extends BoxWeight {//Add shipping costs
	
	double cost;
	double roadcost;
	//construct clone of an object
	Shipment(Shipment ob) { // pass object to constructor
		super(ob);
		cost = ob.cost;
		roadcost=ob.roadcost;
	}
	
	//constructor when all parameters are specified
	Shipment(double w, double h, double d,double m, double c,double c1,double c2) {
		super(w, h, d, m,c); // call superclass constructor
		cost = c1;
		roadcost=c2;
	}
	
	//default constructor
	Shipment() {
		super();
		cost = 5000;
		roadcost=1000;
		shippingcost=7000;
	}
	
	//constructor used when cube is created
	Shipment(double len, double m, double c,double c1,double c2,String add,String rec) {
		super(len, m,c);
		cost = c1;
		roadcost=c2;
		Address=add;
		recipient=rec;
	}
	
	double ship() {
		return shippingcost+roadcost+cost;
	}
	
	void details()
	{
		System.out.print("The Recipient Name is "+recipient);
		System.out.print("\nThe Recipient Address is "+Address);
	}
}	
	

