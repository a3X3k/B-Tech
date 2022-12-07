#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,8> semester;
    array<int,8> core;
    array<int,8> electives;
    for(int i=0;i<8;i++)
    {
        cout<<"Enter the Semester : ";
        cin>>semester[i];
        cout<<"Enter the number of Core Subjects in Semester - "<<semester[i]<<" : ";
        cin>>core[i];
        cout<<"Enter the number of Elective Subjects in Semester - "<<semester[i]<<" : ";
        cin>>electives[i];
        cout<<"\n";
    }
    for(int i=0;i<8;i++)
    {
        cout<<"\nThe Semester "<<semester[i]<<" has the total of "<<core[i]+electives[i]<<" Courses.";
    }

}
