#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long n,m,b;
	cin >> m >> n >>b;
	vector <long long> c(n) ;
	for(long long i=0;i<n;i++) cin >> c[i];
	vector <bool> dp(m+1,false);
	dp[b] = true;
	for(long long i=0;i<n;i++){
		vector <bool> temp(m+1,false);
		for(long long j=0;j<=m;j++){
			if(j-c[i]>=0) if(dp[j]) temp[j-c[i]] = true;
			if(j+c[i]<=m) if(dp[j]) temp[j+c[i]] = true;
		}
		dp = temp;
	}
	long long ans = 0;
	for(long long i=0;i<=m;i++) ans+=dp[i] ;
	if(ans == 0) ans = -1;
	cout << ans << endl;
	return 0;
}