#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // char s[300];
    // ofstream fileout;
    // ifstream filein;
    // fileout.open("data1.txt",ios::app);
    // fileout<<"hello world ";
    // fileout.close();
    // filein.open("data1.txt",ios::in);
    // filein.getline(s,300);
    // cout<<s;


    // fstream obj1;
    // obj1.open("data.txt", ios::out);
    // obj1<<"welcome to all";
    // cout<<obj1.tellp();
    // obj1.close();
    // obj1.open("data.txt", ios::in);
    // cout<<endl<<obj1.tellg();
    // obj1.close();
    // return 0;


    fstream obj1;
    //write mode
    obj1.open("data.txt", ios::out);
    obj1<<"welcome to all";
    cout<<obj1.tellp();
    obj1.seekp(6);
    cout<<endl<<obj1.tellp();
    obj1.close();

    //read mode
    obj1.open("data.txt", ios::in);
    obj1<<"welcome to all";
    cout<<obj1.tellp();
    obj1.seekg(6);
    cout<<endl<<obj1.tellg();
    obj1.close();
    return 0;
}