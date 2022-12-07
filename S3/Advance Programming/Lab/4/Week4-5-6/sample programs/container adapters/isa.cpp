#include<iostream>

using namespace std;

// Template Declaration

template<typename T>

// Template Function
T getMaximun(T x, T y) {
	cout << "T, integer: " << std::is_same<T,int>::value << endl;
	cout << "T, float: " << std::is_same<T,float>::value << endl;
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int a, b, i;
    float c, d, j;

    cout << "Function Template Programs : Get Maximum Number \n";
    cout << "Enter A,B values(integer):";
    cin >> a>>b;
    i = getMaximun<int>(a, b);
    cout << "Result Max Int : " << i;

    cout << "\n\nEnter C,D values(float):";
    cin >> c>>d;
    j = getMaximun<float>(c, d);
    cout << "Result Max Float : " << j;

    return 0;
}
