#include <iostream>
#include <vector>

using namespace std;

int BSearch(vector<int> &vec, int l, int r, int key) {
    while (r-l > 1) 
    { 
    int m = l + (r-l)/2;
    if (vec[m] >= key)
        r = m;
    else
        l = m;
    }
 
    return r;
}

int Length_LIS(vector<int> &v) {
    if (v.size() == 0)
        return 0;
 
    vector<int> tail(v.size(), 0);
    int length = 1;
 
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            
            tail[length++] = v[i];
        else
            
            tail[BSearch(tail, -1, length-1, v[i])] = v[i];
    }
 
    return length;
}
 
int main() {
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        
        int N;
        cin >> N;
        
        int arr[2*N - 1];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        for (int i = 0; i < N-1; i++)
            arr[i+N] = arr[i];
        
        int LIS_i;
        int max = 0;
        for (int i = 0; i < N; i++){
            vector <int> vec(arr+i, arr+i+N);
            LIS_i = Length_LIS(vec);
            
            if (LIS_i > max)
                max = LIS_i;
        }

        cout << max << endl;  
        
    }
   return 0;
}