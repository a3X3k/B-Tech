#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset <int> s;
    int n,choice;
    cout<<"Enter the Number of Iterations : ";
    cin>>n;
    while(n>0)
    {
        cout<<"\nEnter 1 to Insert the Element.";
        cout<<"\nEnter 2 to Search the Element.";
        cout<<"\nEnter the Choice : ";
        cin>>choice;
        std::multiset<int>::iterator it;
        if(choice == 1)
        {
            cout<<"Enter the Element to Insert : ";
            cin>>choice;
            s.insert(choice);
            cout<<"The Element "<<choice<<" Is Inserted.";
        }
        else if(choice==2)
        {
            cout<<"\nEnter the Element to Search : ";
            cin>>choice;
            it=s.find(choice);
            if(it!=s.end())
            {
                cout<<"The Element Is Found "<<s.count(choice)<<" in the Array.";
            }
            else
            {
                cout<<"The Element "<<choice<<" Is Not Found.";
            }
        }
        n--;
    }
    return 0;
}