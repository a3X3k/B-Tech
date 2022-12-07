#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of Test Cases : ";
    cin>>n;
    int N,Z,j;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Number of Soldiers And Pains Strength: ";
        cin>>N>>Z;
        vector <int> arr;
        int pos;
        int count=0;
        cout<<"Enter the Soldier's Strength : ";
        for(j=0;j<N;j++) 
        {
        	int temp;
            cin>>temp;
			arr.push_back(temp);  
        }
        while(true)
        {
            int max=-1;
            for(j=0;j<N;j++) 
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                    pos=j;
                }
            }
            if(Z>max)
            {
                Z=Z-max;
                arr[j]=arr[j]/2;
                count++;
            }
        	else
            {
                count++;
                cout<<count;
                return 0;
            }            
        }
        
    }
}

