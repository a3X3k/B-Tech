#include<iostream>
#include<map>

using namespace std;

int count(char *str) 
{ 
    int f=0,c=0; 
    while (*str) 
    { 
        if (*str == ' ' || *str == '\n' || *str == '\t') 
        {
            f=0;
        }
        else if(f==0) 
        { 
            f=1;
            c++; 
        } 
        str++; 
    } 
    return c; 
} 

int main()
{
    char str[]="Hello Amrita"; 
    cout<<"No of words : "<<count(str); 
    return 0; 
} 
