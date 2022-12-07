#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <int> s;
    int n,choice;
    cout<<"Enter the Number of Iterations : ";
    cin>>n;
    while(n>0)
    {
        cout<<"\nEnter 1 to Insert the Element.";
        cout<<"\nEnter 2 to Search the Element.";
        cout<<"\nEnter 3 to Insert the Element and Find whether its already there are not.";
        cout<<"\nEnter the Choice : ";
        cin>>choice;
        std::set<int>::iterator it;
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
                cout<<"The Element "<<choice<<" Is Found.";
            }
            else
            {
                cout<<"The Element "<<choice<<" Is Not Found.";
            }
        }
        else if(choice==3)
        {
            cout<<"Enter the Element to Insert : ";
            cin>>choice;
            it=s.find(choice);
            if(it!=s.end())
            {
                cout<<"The Element "<<choice<<" Is there in the Set.";
            }
            else
            {
                s.insert(choice);
                cout<<"The Element "<<choice<<" Is Inserted.";
            }
        }
        n--;
    }
    return 0;
}
