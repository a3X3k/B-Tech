#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
int n;
cin>>t;

while(t--)
{
cin>>n;
map<int,int> m;
int x,y;

for(int i=0;i<n;i++)
{
cin>>x>>y;
m[x]++;
m[y]--;
}
int mx=0,ans=0;
for(auto it=m.begin();it!=m.end();it++)
{
ans+=it->second;
if(mx<ans)
mx=ans;
}
cout<<mx<<'\n';
}

}