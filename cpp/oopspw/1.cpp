// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i){
//     int smallest = i;
//     int left = 2* i + 1;
//     int right = 2* i +2;

//     if(left<n && arr[left]<arr[smallest]){
//         smallest=left;
//     }

//     if(right<n && arr[right]<arr[smallest]){
//         smallest=right;
//     }

//     if(smallest!=i){
//         swap(arr[i],arr[smallest]);
//         heapify(arr,n,i);
//     }
// }

// void buildMinHeap(int arr[], int n){
//     int x = (n/2) -1;

//     for(int i=x;i>=0;i--){
//         heapify(arr,n,i);
//     }
// }
// void deleteMin(int arr[], int* n){
//     if(*n == 0){
//         cout<<"Heap is empty!"<<endl;
//         return;
//     }

//     arr[0]=arr[*n - 1];
//     (*n)--;

//     heapify(arr, *n, 0);
// }

// void displayHeap(int arr[], int n){
//     for(int i =0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


//heap insertion
#include <iostream>
using namespace std;
class heap{
    public:
     int arr[100];
     int size;
    heap()
    {
        arr[0]= -1;
        size = 0;
    }
    void insert(int val){
        size=size + 1;
        int index = size;
        arr[index] = val;
        
        while(index > 1){
            int parent = index/2;
            
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1; i<= size; i++){
            cout<< arr[i]<< " ";
            
        }cout << endl;
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    h.print();
    return 0;
}