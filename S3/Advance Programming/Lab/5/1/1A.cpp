#include<iostream>

using namespace std;

struct Btech {
    
   int semester;
   int core;
   int electives;
   
};

int main()
{
    struct Btech course[8];
    for(int i=0;i<8;i++)
    {
        cout<<"Enter the Semester : ";
        cin>>course[i].semester;
        cout<<"Enter the number of Core Subjects in Semester - "<<course[i].semester<<" : ";
        cin>>course[i].core;
        cout<<"Enter the number of Elective Subjects in Semester - "<<course[i].semester<<" : ";
        cin>>course[i].electives;
        cout<<"\n";
    }
    for(int i=0;i<8;i++)
    {
        cout<<"\nThe Semester "<<course[i].semester<<" has the total of "<<course[i].core+course[i].electives<<" Courses.";
    }
}