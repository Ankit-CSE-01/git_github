#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char s[40];
    cout << "Enter input: ";
    cin.getline(s, 40); // Use cin.getline() to read input

    int length = strlen(s);
    fstream obj1;

    // Write mode
    obj1.open("new.txt", ios::out);
    for (int i = 0; i < length; i++) {
        obj1.put(s[i]);
    }
    obj1.seekp(0);
    cout << endl << "File position after writing: " << obj1.tellp() << endl;
    obj1.close();

    // Read mode
    obj1.open("new.txt", ios::in);
    char ch;
    while (obj1.eof() == 0) {
        ch = obj1.get();
        cout << ch;
    }
    obj1.close();

    return 0;
}
