#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    float sum_of_abhi[1],abhi2[1],abhi1[1],counter[1];
    cin>>abhi2[0]>>counter[0];
    
    vector<float> abhiweight;
    int i[1];
    i[0]=0;
    while(i[0]<abhi2[0])
    {
        cin>>abhi1[0];
        sum_of_abhi[0]+=abhi1[0];
        abhiweight.push_back(abhi1[0]);
        i[0]++;
    }
    
    if(sum_of_abhi[0]<counter[0])
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
