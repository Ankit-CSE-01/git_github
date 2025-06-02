#include <iostream>
using namespace std;


template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T>
T sum(T a, T b){
    return a + b;
}

template <typename T1, typename T2>
auto sum(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}


float sum(float a, float b, float c) {
    return a + b + c;
}


template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

int main() {
    
    int a = 5, b = 10;
    cout << "Sum of two integers: " << sum(a, b) << endl;


    double x = 5.5;
    int y = 10;
    cout << "Sum of two template parameters: " << sum(x, y) << endl;

    
    float p = 1.1, q = 2.2, r = 3.3;
    cout << "Sum of three floats: " << sum(p, q, r) << endl;

    
    double d1 = 2.5, d2 = 3.5, d3 = 4.5;
    cout << "Sum of three template parameters: " << sum(d1, d2, d3) << endl;

    return 0;
}
