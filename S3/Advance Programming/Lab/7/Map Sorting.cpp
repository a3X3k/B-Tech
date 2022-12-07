#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<string, int>& a, 
         pair<string, int>& b) 
{ 
    return a.second < b.second; 
}

bool cmp1(pair<string, int>& a, 
         pair<string, int>& b) 
{ 
    return a.second > b.second; 
}

int main()
{
    map <string,int> s;
    s.insert(pair<string,int>("Ram",150));
    s.insert(pair<string,int>("Ganesh",166));
    s.insert(pair<string,int>("Charan",120));
    s.insert(pair<string,int>("Harsha",123));
    s.insert(pair<string,int>("Arvind",109));
    s.insert(pair<string,int>("Bharat",113));
    
    map<string,int>::iterator itr; 
    cout <<"NAME\tROLL NUMBER\n"; 
    for(itr=s.begin();itr!=s.end();++itr) 
    { 
        cout<<itr->first<<'\t'<<itr->second<<'\n'; 
    } 
    cout<<"\n";
    map <string,int,greater<string>> s1;
    s1.insert(pair<string,int>("Ram",150));
    s1.insert(pair<string,int>("Ganesh",166));
    s1.insert(pair<string,int>("Charan",120));
    s1.insert(pair<string,int>("Harsha",123));
    s1.insert(pair<string,int>("Arvind",109));
    s1.insert(pair<string,int>("Bharat",113));

    cout <<"NAME\tROLL NUMBER\n"; 
    for(itr=s1.begin();itr!=s1.end();++itr) 
    { 
        cout<<itr->first<<'\t'<<itr->second<<'\n'; 
    } 
    
    vector<pair<string, int>> v;
    for (itr=s.begin(); itr!=s.end(); itr++) 
    {
        v.push_back(make_pair(itr->first,itr->second));
    }

    sort(v.begin(),v.end(),cmp); 

	cout <<"\nThe map, Sorted by value is:\n";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<": "<<v[i].second<<endl;
	}
	
	vector<pair<string, int>> v1;
    for (itr=s1.begin(); itr!=s1.end(); itr++) 
    {
        v1.push_back(make_pair(itr->first,itr->second));
    }

    sort(v1.begin(),v1.end(),cmp1); 

	cout <<"\nThe map, Sorted by value is:\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i].first<<": "<<v1[i].second<<endl;
	}

}