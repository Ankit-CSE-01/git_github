#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr); it gives the size of the array in bytes int = 4bytes so 5*4 = 20
    int n = sizeof(arr)/sizeof(arr[0]); // it gives the number of elements in the array
    cout<<n<<endl; // prints 5

    // Initializing an array with values
    for (int i = 0; i<=n-1; i++){
        cout << arr[i] << " "; // Printing the values of the array
    }
    cout << endl;
}