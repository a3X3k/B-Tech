#include<bits/stdc++.h>  
using namespace std; 
  
long int max(long int x,long int y)  
{  
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
} 

long int examlcs(char *abhi1,char *abhi2,int temp1,int temp2)  
{  
    int arrayofstring[temp1 + 1][temp2 + 1];  
    int i1, j1;  
    i1=0;
    j1=0;

    while(i1<=temp1)  
    {
        j1=0;
        while(j1<= temp2)  
        {  
            if (i1 == 0 || j1 == 0)
            {
                arrayofstring[i1][j1] = 0;
            }
            else if (abhi1[i1 - 1] == abhi2[j1 - 1])  
            {
                arrayofstring[i1][j1] = arrayofstring[i1 - 1][j1 - 1] + 1;  
            }
            else
            {
                arrayofstring[i1][j1] = max(arrayofstring[i1 - 1][j1], arrayofstring[i1][j1 - 1]); 
            }
            j1++;
        }
        i1++;
    }  
    return arrayofstring[temp1][temp2];  
}  
  

int main()  
{  
    char abhistr1[1000] = "";  
    char abhistr2[1000] = "";
    
    cin>>abhistr1;
    cin>>abhistr2;
      
    int len1; 
    len1 = strlen(abhistr1);  
    int len2;
    len2 = strlen(abhistr2);  
    
    cout<<examlcs(abhistr1,abhistr2,len1,len2);  
    return 0;  
}  