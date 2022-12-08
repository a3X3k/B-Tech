package over;

public class overbox {
	
	static void add(float x,float y)
	{
		System.out.println("The Addition of two Float point Numbers is : "+(x+y));
	}
	
	static void add(double x,double x1,int y,int y1)
	{
		if(y+y1>0)
		{
			System.out.print("\nThe Addition of two Complex Numbers is : "+(int)(x+x1)+" + i"+(y+y1));
		}
		else
		{
			System.out.print("\nThe Addition of two Complex Numbers is : "+(int)(x+x1)+" - i"+(-(y+y1)));
		}
	}
	
	static void add(int x,int x1,int y,int y1)
	{
		System.out.print("\n\nThe Addition of two Vectors is : "+"<"+(x+x1)+","+(y+y1)+">");

	}
	

}
