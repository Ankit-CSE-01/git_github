#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream fout;
    // fout.open("country.txt");
    // fout<<"india\n";
    // fout<<"usa\n";
    // fout<<"uk\n";
    // fout.close();
    // fout.open("capital.txt");
    // fout<<"delhi\n";
    // fout<<"washington\n";
    // fout<<"londan\n";
    // fout.close();

    const int n=80;
    char s[n];
    ifstream fin;
    fin.open("country.txt");
    while(fin.eof()==0)
    {
        fin.getline(s,n);
        cout<<endl<<endl<<s;
    }
    fin.close();
    fin.open("capital.txt");
    while(fin.eof()==0)
    {
        fin.getline(s,n);
        cout<<endl<<endl<<s;
    }
    fin.close();
    

}
//write a programe to create or open 3 files f1,f2,f3 using open method having same stream object for writing your name city in f1 file , state and country in f2 file, email id in f3 and then read the content of these files