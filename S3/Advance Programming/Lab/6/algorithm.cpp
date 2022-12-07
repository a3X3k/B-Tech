#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cstdlib>

using namespace std;


bool is_Odd(int n){
	return (n%2!=0);
}

bool marks(int n){
	return(n>20);
}

bool gotFull(int n){
	return(n==20);
}

bool gotNegative(int n){
	return (n>0);
}

void add5(int n){
	n = n+5;
	cout << n << " ";
}

bool get44(int n){
	return (n==44);
}


int main(){

	bool result;
	int n;

	 vector<int> v = {20,25,25,50,40,22,25,45,42,44,33,35,44,48};
	 int arr[] = {20,25,25,50,40,22,25,45,42,44,33,35,44,48};

	 if(all_of(v.begin(),v.end(),is_Odd)){
	 	cout << "All the elements are odd" << endl;
	 }
	 else
	 	cout << "All the elements are not odd" << endl;

	if(any_of(v.begin(),v.end(),is_Odd)){

	 	cout << "Some of the elements are odd" << endl;
	 }
	 else
	 	cout << "None of the elements are not odd" << endl;	 

	 if(all_of(v.begin(),v.end(),marks)){
	 	cout << "All marks are above 20" << endl;
	 }
	 else
	 	cout << "All marks are not above 20" << endl;

	 if(any_of(v.begin(),v.end(),gotFull)){

	 	cout << "Someone got 50" << endl;
	 }
	 else
	 	cout << "None got 50" << endl;

	 if(all_of(v.begin(),v.end(),gotNegative)){
	 	cout << "Nobody has negative marks" << endl;
	 }
	 else
	 	cout << "All the elements are negative" << endl;

	 for_each(v.begin(),v.end(),add5);

	 cout << "\n";

	 vector<int>::iterator it = find_if(v.begin(),v.end(),get44);
	 cout << "Index: " << (it - v.begin()) << endl;

	 double avg = accumulate(v.begin(),v.end(),0.0) / v.size();
	 cout << "Average: " << avg << endl;

	 sort(v.begin(), v.end());

	 for(auto i: v){
	 	cout << i << " ";
	 } 

	 cout << "\n";

	for (int i=0,n=v.size(); i<n-1; i++) {
    	cout << abs(v[i] - v[i+1]) << " ";
	}

	cout << "\n";

	int class1[] = { 44, 43, 25, 39, 33, 38 }; 
    int class2[] = { 30, 44, 35,22, 38, 49, 33, 41}; 

    int k = sizeof(class1) / sizeof(class1[0]);
    int m = sizeof(class2) / sizeof(class2[0]);

    vector<int> v1(20);
    vector<int> :: iterator it1,st;

    sort(class1,class1+k);
    sort(class2,class2+m);

    it1 = set_union(class1,class1+k,class2,class2+m,v1.begin());

    for (st = v1.begin(); st != it1; ++st) 
        std::cout << *st << " "; 
    std::cout << '\n'; 

    int arr2[] = {1,3,2,5};
    int f = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr2,arr2+f);

    while(next_permutation(arr2,arr2+f)){
    	cout << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] <<  "\n";
    }

}