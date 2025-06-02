#include<iostream>
using namespace std;

void mem_leak()
{
    int* ptr = new int[10];
    
    delete []ptr;
    ptr= null;
}

int main()
{
    mem_leak();
    return 0;
}


int main()
{
    int* pvalue =NULL;
    pvalue = new int;
    *pvalue =23;
    cout<<"Address where pointer is pointing before deletion:"<<pvalue<<endl;
    delete pvalue;
    cout<<"Address where pointer is pointing after deletion:"<<pvalue<<endl;
    pvalue=NULL;
    cout<<"\n"<<pvalue;
    return 0;
}


//write a program to ask user to enter roll no, name ,cgpa, allocate the memory to them dynamically print the values of those variable then 
//delete the memory then print the values of variable again print their addresses