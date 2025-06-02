#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int* roll_no = new int;
    char* name = new char[50];
    float* cgpa = new float;

    
    cout << "Enter Roll No: ";
    cin >> *roll_no;
    cout << "Enter Name: ";
    cin.ignore(); 
    cin.getline(name, 50);
    cout << "Enter CGPA: ";
    cin >> *cgpa;

    
    cout << "Roll No: " << *roll_no << ", Address: " << roll_no << endl;
    cout << "Name: " << name << ", Address: " << static_cast<void*>(name) << endl;
    cout << "CGPA: " << *cgpa << ", Address: " << cgpa << endl;

    if(*roll_no%2==0){
        cout<<roll_no+cgpa;
    }else{
        cout<<roll_no-cgpa;
    }
    delete roll_no;
    delete[] name;
    
    delete cgpa;
    roll_no = NULL;
    name = NULL;
    cgpa = NULL;
    
    cout << "After deletion:" << endl;
    cout << "Roll No: " << *roll_no << ", Address: " << roll_no << endl;
    cout << "Name: " << name << ", Address: " << static_cast<void*>(name) << endl;
    cout << "CGPA: " << *cgpa << ", Address: " << cgpa << endl;


    return 0;
}
