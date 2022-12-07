#include<bits/stdc++.h>

using namespace std;

int max(int a, int b)  
{  
   if(a>b)
   {
       return a;
   }
   else
   {
       return b;
   }
   
} 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }

        int s=0;
        for (int j=0; j<n; ++j) 
        {
            vector<int> v;
            for (int i=0; i<n; ++i) 
            {
                auto it=lower_bound(v.begin(), v.end(), arr[(i+j)%n]);
                if (it != v.end()) 
                {
                    *it=arr[(i+j)%n];
                }
                else
                { 
                    v.push_back(arr[(i+j)%n]);
                }
            }
            s = max(s,v.size());
        }
        cout << s << '\n';
    }
    return 0;
}