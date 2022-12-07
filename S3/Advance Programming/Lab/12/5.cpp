#include <bits/stdc++.h>
using namespace std;

class coin {
public:
   int change(int amount, vector<int>& coins) {
      vector <int> dp(amount + 1);
      dp[0] = 1;
      int n = coins.size();
      for(int i = 0; i < n; i++){
         for(int j = coins[i]; j <= amount; j++){
            dp[j] += dp[j - coins[i]];
         }
      }
      return dp[amount];
   }
};
main()
{
   coin c;
   int cost;
   vector<int> v = {1,2,3};
   cout<<"Enter the Cost : ";
   cin>>cost;
   cout << (c.change(cost, v));
}