package Abhi10;

abstract class Marks {
	
	abstract float getper();

}

class A extends Marks{
	
	float m1,m2,m3;
	
	A()
	{
		m1=99;
		m2=98;
		m3=99;
	}
	
	A(float m,float n,float o)
	{
		m1=m;
		m2=n;
		m3=o;
	}
	float getper()
	{
		return ((m1+m2+m3)/300)*100;
	}
}

class B extends Marks{
	
	float m1,m2,m3,m4;
	
	B()
	{
		m1=99;
		m2=98;
		m3=99;
		m4=97;
	}
	
	
	B(float m,float n,float o,float p)
	{
		m1=m;
		m2=n;
		m3=o;
		m4=p;
	}
	float getper()
	{
		return ((m1+m2+m3+m4)/400)*100;
	}
}
