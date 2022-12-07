#include<iostream>
using namespace std;

class time
{
	private:
		int hour=0;
		int minute=0;
		int second=0;
	
	public:
		time(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;	
		}
		
		int gethour()
		{
			return hour;
		}
		
		int getminute()
		{
			return minute;
		}
		
		int getsecond()
		{
			return second;
		}
		
		void sethour(int h)
		{
			hour=h;
		}
		
		void setminute(int m)
		{
			minute=m;
		}
		
		void setsecond(int s)
		{
			second=s;
		}
		
		void settime(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		
		void print()
		{
			cout<<"Time = "<<hour<<" : "<<minute<<" : "<<second<<endl;
		}
		
		void nextsecond()
		{
			second++;
			if(second>=60)
			{
				second=0;
			}
			
			minute++;
			if(minute>=60)
			{
				minute=0;
			}
			
			hour++;
			if(hour>=60)
			{
				hour=0;
			}
			
		}
			
};

int main()
{
	time t1(1,2,3);
	cout<<"USER GIVEN TIME : \n\n";
	t1.print();
	
	cout<<"\nExtracted Hour : "<<t1.gethour()<<endl;
	cout<<"Extracted Minute : "<<t1.getminute()<<endl;
	cout<<"Extracted Second : "<<t1.getsecond()<<endl;
	
	t1.sethour(2);
	t1.setminute(3);
	t1.setsecond(4);
	cout<<"\nUPDATED HOUR-MINUTE-SECOND : \n\n";
	t1.print();
	
	t1.settime(11,59,59);
	cout<<"\nUPDATED TIME : \n\n";
	t1.print();
	
	t1.nextsecond();
	cout<<"\nFUTURE TIME : \n\n";
	t1.print();
}
