#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}

void printArray(int arr[], int n)
{
    for(int i=0; i <n; ++i)
    {
        printf("%d", arr[i]);
    }
    printf(":\n");
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    if(leftChild<n && arr[leftChild]>arr[largest])
    {
        largest=leftChild;
    }if (largest != i){
        heapify(arr,n);
    }
}

void building(int arr[], int n){
    int lastNonNode(n/2)-1;
    for (int i=lastNonNode; i>=0; i--)
    {
        heapify(arr,n,i);
    }
}

int main()
{
    int arr[]={4,18,14,10,19,20,14,8,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is: "<<endl;
    cout<<arr<<n<<endl;
    
}