#include<bits/stdc++.h>
using namespace std;

 bool isAnagram(string string1, string string2) 
    {
        multiset <char, greater <char> > str1;
        multiset <char, greater <char> > str2;
        if(string1.size()==string2.size())
        {
            for(int i=0;i<string1.size();i++)
            {
                str1.insert(string1[i]);
                str2.insert(string2[i]);

            }
            if(str1==str2)
            {
                return true;
            }
            else
            {
               return false;
            }
        
        }
        else
        {
            return false;
        }    
    }
int main()
{
    string string1,string2;
    cin>>string1;
    cin>>string2;

    bool ans=isAnagram(string1,string2);
    cout<<ans;
    
    

}