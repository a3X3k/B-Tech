package Abhi7;

class Vehicle {
	
	String make;
	String regno;
	String model;
	int numWheels;
    int mileage;
    String color;
    
    Vehicle(String m,String r,String mod,int num,int mil,String col)
    {
    	make=m;
    	regno=r;
    	model=mod;
    	numWheels=num;
        mileage=mil;
        color=col;
    }
    
    String Make()
    {
    	return this.make;
    }
    
    String RegNo()
    {
    	return this.regno;
    }
    
    String color()
    {
    	return this.color;
    }
    
    String model()
    {
    	return this.model;
    }
    
    int Wheels()
    {
    	return this.numWheels;
    }
    
    int Mileage()
    {
    	return this.mileage;
    }
    
    Vehicle(Vehicle ob)
    {
    	make=ob.make;
    	regno=ob.regno;
    	model=ob.model;
    	numWheels=ob.numWheels;
        mileage=ob.mileage;
        color=ob.color;
    }
    
    Vehicle()
    {
    	make="AUDI";
    	regno="KL-10001";
    	model="A9";
    	numWheels=4;
        mileage=18;
        color="Brown";
    }
}

class Road extends Vehicle {
	
	float onroadprice;
	float offroadprice;
	
	Road(String m,String r,String mod,int num,int mil,String col,float onroad,float offroad)
	{
		super(m,r,mod,num,mil,col);
		onroadprice=onroad;
		offroadprice=offroad;
	}
	
	Road()
	{
		super();
		onroadprice=4000000;
		offroadprice=20000000;
	}
	
	Road(Road ob)
	{
		super(ob);
		onroadprice=ob.onroadprice;
		offroadprice=ob.offroadprice;
	}
	
	float on()
	{
		return onroadprice;
	}
	
	float off()
	{
		return offroadprice;
	}
}

class FourWheel extends Road{
	
	float engineprice;
	float bodyprice;
	
	FourWheel(String m,String r,String mod,int num,int mil,String col,float onroad,float offroad,float ep,float bp)
	{
		super(m,r,mod,num,mil,col,onroad,offroad);
		engineprice=ep;
		bodyprice=bp;
	}
	
	FourWheel()
	{
		super();
		engineprice=300000;
		bodyprice=200000;
	}
	
	FourWheel(FourWheel ob)
	{
		super(ob);
		engineprice=ob.engineprice;
		bodyprice=ob.bodyprice;
	}
	
	float engprice()
	{
		return engineprice;
	}
	
	float bodyprice()
	{
		return bodyprice;
	}
}

class TwoWheel extends FourWheel{
	
	int fuelcapacity;
	
	TwoWheel()
	{
		super();
		fuelcapacity=80;
	}
	
	TwoWheel(String m,String r,String mod,int num,int mil,String col,float onroad,float offroad,float ep,float bp,int f)
	{
		super(m,r,mod,num,mil,col,onroad,offroad,ep,bp);
		fuelcapacity=f;
	}
	
	TwoWheel(TwoWheel ob)
	{
		super(ob);
		fuelcapacity=ob.fuelcapacity;
	}
	
	int fcap()
	{
		return fuelcapacity;
	}
	
}

class WaterBourne extends Vehicle {
	
	String name;
	int pass_capacity;
	
	WaterBourne()
	{
		super();
		name="Yacht";
		pass_capacity=10;
	}
	
	WaterBourne(String m,String r,String mod,int num,int mil,String col,String n,int cap)
	{
		super(m,r,mod,num,mil,col);
		name=n;
		pass_capacity=cap;
	}
	
	WaterBourne(WaterBourne ob)
	{
		super(ob);
		name=ob.name;
		pass_capacity=ob.pass_capacity;
	}
	
}

class OceanVessel extends WaterBourne {
	
	String type;
	OceanVessel()
	{
		super();
		type="Cargo";
		color="Black";
	}
	
	OceanVessel(String m,String r,String mod,int num,int mil,String col,String n,int cap,String t)
	{
		super(m,r,mod,num,mil,col,n,cap);
		type=t;
	}
	
	OceanVessel(OceanVessel ob)
	{
		super(ob);
		type=ob.type;
	}
	
}

class CoastVessel extends OceanVessel {
	
	int capacity;
	String origin;
	
	CoastVessel()
	{
		super();
	}
	
	CoastVessel(String m,String r,String mod,int num,int mil,String col,String n,int cap,String t,int cap1, String o)
	{
		super(m,r,mod,num,mil,col,n,cap,t);
		capacity=cap1;
		origin=o;
	}
	
	CoastVessel(CoastVessel ob)
	{
		super(ob);
		capacity=ob.capacity;
		origin=ob.origin;
	}
}

