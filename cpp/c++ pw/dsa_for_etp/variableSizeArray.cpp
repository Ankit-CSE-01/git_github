#include<iostream>
using namespace std;

int main(){
    int n; // size of array
    cout<<"Enter Array Size: "; //number of elements in array
    cin>>n;
    int arr[n]; // variable size array
    for(int i = 0; i<n; i++){
        cin>>arr[i]; // taking input from user
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" "; // prints the elements of the array
    }
    return 0;
}