#include<bits/stdc++.h>
using namespace std;

vector<int> result(vector<int>v)
{
	vector<int>dp(10000,0);

	int n = v.size()-1;

	if(!(v[n]&1)) dp[n] = 1;

	for(int i=n-1; i>=0; i--)
	{
		if(v[i]&1) dp[i] = dp[i+1];
		else dp[i] = 1+dp[i+1];
	}

	return dp;
}

int main()
{
	string s;
	cin>>s;
	vector<int>v;
	for(int i=0; i<s.size(); i++)
	{
		int k = s[i] - '0';
		v.push_back(k);
	}

	vector<int>a = result(v);

	for(int i=0; i<v.size(); i++)
		cout<<a[i]<<" ";

	return 0;	 
}