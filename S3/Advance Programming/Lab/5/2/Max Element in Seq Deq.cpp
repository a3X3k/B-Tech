#include <iostream> 
#include <deque> 
  
using namespace std; 
  
int main() 
{
    int i=0,n,s,s1,j,ele;
    cin>>n;
    while(i<n)
    {
        i++;
        deque <int> dq;
        cin>>s>>s1;
        for(j=0;j<s;j++)
        {
            cin>>ele;
            dq.push_back(ele);
        }
        for(j=0;j<=s-s1;j++)
        {
            int max=-1;
            for(int k=j;k<j+s1;k++)
            {
                if(dq[k]>max)
                {
                    max=dq[k];
                }
            }
            cout<<max<<" ";
        }
        cout<<"\n";
    }
}