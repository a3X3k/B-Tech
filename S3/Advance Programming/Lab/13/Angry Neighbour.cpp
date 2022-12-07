#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int num = pow(10, 9) + 7;

void multiply(vector<vector<unsigned long long int> >& F, vector<vector<unsigned long long int> >& M){
    unsigned long long int f00 = (F[0][0]*M[0][0])%num + (F[0][1]*M[1][0])%num;
    unsigned long long int f01 = (F[0][0]*M[0][1])%num + (F[0][1]*M[1][1])%num;
    unsigned long long int f10 = (F[1][0]*M[0][0])%num + (F[1][1]*M[1][0])%num;
    unsigned long long int f11 = (F[1][0]*M[0][1])%num + (F[1][1]*M[1][1])%num;
    
    F[0][0] = f00%num;
    F[0][1] = f01%num;
    F[1][0] = f10%num;
    F[1][1] = f11%num;
}

void power(vector<vector<unsigned long long int> >& F, long long int n){
    if(n <= 1){
        return;
    }
    power(F, n/2);
    multiply(F, F);
    
    if(n%2){
        vector<vector<unsigned long long int> > M(2, vector<unsigned long long int>(2, 1));
        M[1][1] = 0;
        multiply(F, M);
    }
}

long long int fib(unsigned long long int n){
    vector<vector<unsigned long long int> > F(2, vector<unsigned long long int>(2, 1));
    F[1][1] = 0;
    power(F, n);
    
    return F[0][0];
}

int main()
{
    int test;
    cin >> test;
    
    while(test--){
        unsigned long long int n;
        cin >> n;
        
        cout << fib(n+1) << endl;
    }
    
    return 0;
}