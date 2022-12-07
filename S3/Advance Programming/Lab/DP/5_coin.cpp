#include<bits/stdc++.h> 
using namespace std; 

int minCoins(int denominations[], int n, int cost) 
{ 
	int arr[cost+1]; 

	arr[0] = 0; 

	for (int i=1; i<=cost; i++) 
	{
        arr[i] = INT_MAX;
    } 

	for (int i=1; i<=cost; i++)
    { 
		for (int j=0; j<n; j++) 
		if (denominations[j] <= i) 
        { 
			int sub_res = arr[i-denominations[j]];

			if (sub_res != INT_MAX && sub_res + 1 < arr[i]) 
				arr[i] = sub_res + 1; 
		} 
	} 
	return arr[cost]; 
} 

int main() 
{ 
	int denominations[] = {1,2,3}; 

	int n = sizeof(denominations)/sizeof(denominations[0]); 

	int cost = 15; 
    
	cout << "Minimum number of coins required: "<< minCoins(denominations, n, cost); 
	return 0; 
} 