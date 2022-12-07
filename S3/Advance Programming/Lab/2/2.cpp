#include <iostream>
#include <string>

using namespace std;

class elective
{
	
	public :
		string course_code;
		float capacity;
		float reserved;
		
		int elective;
		void set_status(int i,string cc,int c,int r){
			
			elective=i;
			course_code=cc;
			capacity=c;
			reserved=r;
			
		}
		
		void print()
		{
			if(reserved>capacity)
			{
				cout<<"\nERROR IN PERFORMING THIS ACTION !!\n";
			}
			else
			{
				cout<<"\nSTATUS : "<<endl;
				cout<<"\n\tELECTIVE "<<elective<<"\n\tCOURSE CODE : "<<course_code<<"\n\tCapacity : "<<capacity<<"\n\tReserved Seats : "<<reserved<<endl;
				cout<<"\nELECTIVE "<<elective<<" : COURSE["<<course_code<<"] : "<<"["<<reserved<<"/"<<capacity<<"] ( ["<<(reserved/capacity)*100<<"]% ) SEATS ALLOTED"<<endl;
			}
			
		}
		
		void add(int i)
		{
			capacity+=i;
		}
		
		void dec(int i)
		{
			capacity-=i;
		}
};

int main()
{
	int i,c,r,n;
	string cc;
	cout<<"ENTER THE ELECTIVE NUMBER : ";
	cin>>i;
	cout<<"\nENTER THE COURSE CODE : ";
	cin>>cc;
	cout<<"\nENTER THE CAPACITY OF SEATS : ";
	cin>>c;
	cout<<"\nENTER THE NUMBER OF RESERVED SEATS : ";
	cin>>r;
	
	elective stu;
	stu.set_status(i,cc,c,r);
	stu.print();
	
	string choice="quit";
	
	while(choice!="Quit")
	{
		cout<<"\nENTER 1 TO ADD CAPACITY OR 2 TO REDUCE CAPACITY : ";
		cin>>n;
		if(n==1)
		{
			cout<<"\nENTER THE CAPACITY TO INCREASE : ";
			cin>>n;
			stu.add(n);
		}
		else
		{
			cout<<"\nENTER THE CAPACITY TO DECREASE :  ";
			cin>>n;
			stu.dec(n);
		}
		stu.print();
		cout<<"\nENTER Quit TO STOP OR ANY OTHER KEY TO CONTINUE : ";
		cin>>choice;
	}
}
