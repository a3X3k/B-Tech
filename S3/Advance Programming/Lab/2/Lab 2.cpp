#include <iostream>
#include <string>

using namespace std;

class car {
	
	string brand;
	string model;
	int year;
	int speed;
	
	public: 
	
	car():brand("Benz"),model("S Class"),year(2008),speed(1200)
	{
		cout <<"This is the Default constructor ..!"<<endl;
	}
	car(string b,string m,int y,int s)
	{
		brand=b;
		model=m;
		year=y;
		speed=s;
		cout<<"This is Overloading constructor ..!"<<endl;
	}
	
	void set_values(string b,string m,int y,int s)
	{
		brand=b;
		model=m;
		year=y;
		speed=s;
	}
	
	void set_brand_model(string b,string c)
	{
		brand=b;
		model=c;
	}
	
	void print_values()
	{
		cout<<"\t\tBrand : "<<brand<<"\n\t\tModel : "<<model<<"\n\t\tYear : "<<year<<"\n\t\tSpeed : "<<speed<<endl;
	}
	
	void Brand(int i)
	{
		cout<<"\t\t"<<i<<" : "<<brand<<" "<<model<<endl;
	}
	int get_speed()
	{
		return speed;
	}
};

int speed(int a,int b,int c)
{
	if(a>b && a>c)
	{
		cout<<"Benz : ";
		return a;
	}
	else if(b>a && b>c)
	{
		cout<<"Audi : ";
		return b;
	}
	else 
	{
		cout<<"BMW : ";
		return c;
	}
}
int main () 
{
	car my_car1;
	car my_car2("Maruti","Alto",2000,1400);
	car my_car3;
	my_car3.set_values("Bmw","S Class",2010,1500);
	cout<<endl;
	cout<<"CAR DATA BASE : \n"<<endl;
	my_car1.print_values();
	cout<<endl;
	my_car2.print_values();
	cout<<endl;
	my_car3.print_values();
	
	string name,model;
	cout<<"\nENTER THE NEW CAR NAME : ";
	cin>>name;
	cout<<"\nENTER THE NEW MODEL NAME : ";
	cin>>model;
	my_car2.set_brand_model(name,model);
	cout<<"\nUPDATED BRAND AND MODEL : \n"<<endl;	
	my_car2.print_values();
	cout<<endl;
	cout<<"\nCARS AVAILABLE FOR SALE : \n"<<endl;
	int i=0;
	my_car1.Brand(++i);
	my_car2.Brand(++i);
	my_car3.Brand(++i);
	cout<<"\nTHE CAR WITH HIGHEST HORSE POWER IN THE DATABASE IS --> ";
	int a=my_car1.get_speed();
	int b=my_car2.get_speed();
	int c=my_car3.get_speed();
	cout<<speed(a,b,c)<<" CC";
}
