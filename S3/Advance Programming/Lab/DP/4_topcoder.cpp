#include<bits/stdc++.h>
using namespace std;

void zigzag(vector<int> v, int n) 
{ 
	int arr[n][2]; 

	for (int i = 0; i < n; i++)
    {
		arr[i][0] = 1;
        arr[i][1] = 1; 
    }

	int s = 1;  
	for (int i = 1; i < n; i++) 
    { 
		for (int j = 0; j < i; j++) 
        { 
			if (v[j] < v[i] && arr[i][0] < arr[j][1] + 1) 
			{
                arr[i][0] = arr[j][1] + 1;
            } 

			if( v[j] > v[i] && arr[i][1] < arr[j][0] + 1) 
			{
                arr[i][1] = arr[j][0] + 1;
            } 
		} 
		if (s < max(arr[i][0], arr[i][1]))
        { 
			s = max(arr[i][0], arr[i][1]); 
        }
	} 

	cout<<"Longest Subsqequnce is: "<<s;
} 

int main() 
{ 
	vector<int> v ; 
	int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int value = 0;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);
    } 
	zigzag(v, n); 
	return 0; 
} 