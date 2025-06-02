#include<iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i = 1; i<=x; i++){
        fact*=i; // Multiplying the values of the array
    }
    return fact; // Returning the factorial of the number
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    // int a = 1;
    // for(int i = 1; i<=n; i++){
    //     a*=i; // Multiplying the values of the array
    // }
    // // cout<<product<<endl; // Printing the values of the array
    // int b = 1;
    // for(int i = 1; i<=r; i++){
    //     b*=i; // Multiplying the values of the array
    // }
    // int c = 1;
    // for(int i = 1; i<=n-r; i++){
    //     c*=i; // Multiplying the values of the array
    // }
    // cout<<a/(b*c)<<endl; // Printing the values of the array
    int a = factorial(n); // Calling the factorial function to calculate the factorial of n
    int b = factorial(r); // Calling the factorial function to calculate the factorial of r
    int c = factorial(n-r); // Calling the factorial function to calculate the factorial of n-r
    cout<<a/(b*c)<<endl; // Printing the values of the array
    cout<<a/c<<endl; // Printing the values of the array
}