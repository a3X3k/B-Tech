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
			cout<<"\nSTATUS : "<<endl;
			cout<<"\n\tELECTIVE "<<elective<<"\n\tCOURSE CODE : "<<course_code<<"\n\tCapacity : "<<capacity<<"\n\tReserved Seats : "<<reserved<<endl;
			cout<<"\nELECTIVE "<<elective<<" : COURSE["<<course_code<<"] : "<<"["<<reserved<<"/"<<capacity<<"] ( ["<<(reserved/capacity)*100<<"]% ) SEATS ALLOTED"<<endl;
		}
};

int main()
{
	int i,c,r;
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
}
