// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int *p=NULL;
//     p=new int;
//     if(p=NULL)
//     {
//         cout<<"\n Memory allocation failure";
//         exit(1);
//     }
//     else{
//         cout<<"\nMemory allocated";
//         int n;
//         cout<<"Enter the value";
//         cin>>*p;
//         cout<<"Integer value stored is:"<<*p;
//         delete p;
//         cout<<"\n Memory deallocated";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

struck Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int value){
        data=value;
        left=right=nullptr;
    }
};

Node* insert(Node* root, int value){
    if(root==nullptr){
        return new Node(value);
    }
    if(value<root->data){
        root->left=insert(root->left, value);
    }
    else if(value>root->data){
        root->right=insert(root->right, value);
    }
    return root;
}

void postOrder(Node* root){
    if(root==nullptr){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=nullptr;
    int value;
    
    while(true){
        cin>>value;
        if(value==-1){
            break;
        }
        root=insert(root,value);
    }
    postOrder(root);
    cout<<endl;
    
    return 0;
}
