#include <iostream>
#include<string>
#include <map> 
using namespace std;

int main()
{
    map < int,string> s;
    s.insert(pair< int,string>(1,"January")); 
    s.insert(pair< int,string>(2,"February")); 
    s.insert(pair< int,string>(3,"March")); 
    s.insert(pair< int,string>(4,"April")); 
    s.insert(pair< int,string>(5,"May")); 
    s.insert(pair< int,string>(6,"June")); 
    s.insert(pair< int,string>(7,"July")); 
    s.insert(pair< int,string>(8,"August")); 
    s.insert(pair< int,string>(9,"September")); 
    s.insert(pair< int,string>(10,"October")); 
    s.insert(pair< int,string>(11,"November")); 
    s.insert(pair< int,string>(12,"December")); 
    
    map<int,string>::iterator itr; 
    /*cout << "\tYear\tdays\n"; 
    for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    }*/
    cout<<"Enter the Month : ";
    string month;
    cin>>month;
    for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
        if(itr->second==month && month!="January")
        {
            cout<<itr->second;
            if (itr->first == 1 || itr->first == 3 || itr->first == 5 || itr->first == 7 || itr->first == 8 || itr->first == 10 || itr->first == 12) 
            { 
                cout<<" - 31 Days.\n";
            }
            else if (itr->first == 4 || itr->first == 6 || itr->first == 9 || itr->first == 11) 
            { 
                cout<<" - 30 Days.\n";
            }
            else if (itr->first == 2) 
            { 
                cout<<" - 28 Days.\n";
            }
            itr++;
            cout<<itr->second;
            if (itr->first == 1 || itr->first == 3 || itr->first == 5 || itr->first == 7 || itr->first == 8 || itr->first == 10 || itr->first == 12) 
            { 
                cout<<" - 31 Days.\n";
            }
            else if (itr->first == 4 || itr->first == 6 || itr->first == 9 || itr->first == 11) 
            { 
                cout<<" - 30 Days.\n";
            }
            else if (itr->first == 2) 
            { 
                cout<<" - 28 Days.\n";
            }
            itr--;
            itr--;
            cout<<itr->second;
            if (itr->first == 1 || itr->first == 3 || itr->first == 5 || itr->first == 7 || itr->first == 8 || itr->first == 10 || itr->first == 12) 
            { 
                cout<<" - 31 Days.\n";
            }
            else if (itr->first == 4 || itr->first == 6 || itr->first == 9 || itr->first == 11) 
            { 
                cout<<" - 30 Days.\n";
            }
            else if (itr->first == 2) 
            { 
                cout<<" - 28 Days.\n";
            }
            break;
        }
        else if(itr->second==month && month=="January")
        {
            cout<<itr->second;
            if (itr->first == 1 || itr->first == 3 || itr->first == 5 || itr->first == 7 || itr->first == 8 || itr->first == 10 || itr->first == 12) 
            { 
                cout<<" - 31 Days.\n";
            }
            else if (itr->first == 4 || itr->first == 6 || itr->first == 9 || itr->first == 11) 
            { 
                cout<<" - 30 Days.\n";
            }
            else if (itr->first == 2) 
            { 
                cout<<" - 28 Days.\n";
            }
            itr++;
            cout<<itr->second;
            if (itr->first == 1 || itr->first == 3 || itr->first == 5 || itr->first == 7 || itr->first == 8 || itr->first == 10 || itr->first == 12) 
            { 
                cout<<" - 31 Days.\n";
            }
            else if (itr->first == 4 || itr->first == 6 || itr->first == 9 || itr->first == 11) 
            { 
                cout<<" - 30 Days.\n";
            }
            else if (itr->first == 2) 
            { 
                cout<<" - 28 Days.\n";
            }
            break;
        }
    } 
    return 0;
}


