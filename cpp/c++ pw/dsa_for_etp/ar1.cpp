#include<iostream>
using namespace std;

int main(){
    int arr[5]; //int is data type arr is variable name 5 inside bracket is size of array
    // arr[0]= 5;
    // arr[1]=10;
    // arr[2]=15;
    // arr[3]=20;
    // arr[4]=25;

    //taking input from user
    for(int i = 0; i<=4; i++){
         // i=0 to 4(which is index of elements in array)
        cin>>arr[i]; // taking input from user
    }
    // cout<<arr[0]; // prints 5
    for(int i = 0; i<=4; i++){ // i=0 to 4(which is inex of elements in array)
        cout<<arr[i]<<" "; // prints 5 10 15 20 25
    }
}