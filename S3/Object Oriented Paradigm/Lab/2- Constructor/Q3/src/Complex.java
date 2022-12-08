public class Complex {
	
	float real;
	float img;
	
	Complex()
	{
		real=5;
		img=8;
	}
	
	Complex(float x,float y)
	{
		real=x;
		img=y;
	}
	
	void add(float x1,float x2,float y1,float y2){
		
		float real1 = x1+x2;
		float img1 = y1+y2;
		System.out.println("Addition : "+real1+" + i("+img1+")");
	}
	
	void sub(float x1,float x2,float y1,float y2){
		
		float real1 = x1-x2;
		float img1 = y1-y2;
		if(img<0)
		{
			System.out.println("Subtraction : "+real1+" - i("+-(img1)+")\n");
		}
		else
		{
			System.out.println("Subtraction : "+real1+" + i("+img1+")\n");
		}
	}

}
