#include<iostream>>
#include<fstream>>
#include<string>
using namespace std;

class student
{
    char name[50];
    int rollno;

    public:
    void getinfo()
    {
        cout<<"Enter name=";
        gtes(name);
        cout<<"Enter Roll no=";
        cin>>rollno;
        cout<<"Enter Marks=";
        cin.ignore();
        cin>>marks;
    }
    void putinfo()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Rollno="<<rollno<<endl;
        cout<<"Marks="<<marks<<endl;
    }
};

int main(){
    student s1,s2;
    s1.getinfo();
    fstream fobj;
    fobj.open("nn.txt", ios::out|ios::binary);
    fobj.write((char*)&s1,sizeof(s1));
    fobj.close();


    fobj.open("nn.txt",ios::in|ios::binary);
    fobj.read((char*)&s2,sizeof(s2));
    s2.putinfo();
    fobj.close();
    return 0;
}