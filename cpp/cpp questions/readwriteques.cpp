#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file;
    
    
    file.open("f1.txt", ios::out);
    if (file.is_open()) {
        file << "Name: John Doe\n";
        file << "City: New York\n";
        file.close();
    } else {
        cout << "Unable to open f1.txt for writing\n";
    }
    
    
    file.open("f2.txt", ios::out);
    if (file.is_open()) {
        file << "State: New York\n";
        file << "Country: USA\n";
        file.close();
    } else {
        cout << "Unable to open f2.txt for writing\n";
    }
    
    
    file.open("f3.txt", ios::out);
    if (file.is_open()) {
        file << "Email: johndoe@example.com\n";
        file.close();
    } else {
        cout << "Unable to open f3.txt for writing\n";
    }
    
    
    file.open("f1.txt", ios::in);
    if (file.is_open()) {
        string line;
        cout << "\nContents of f1.txt:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open f1.txt for reading\n";
    }
    
    
    file.open("f2.txt", ios::in);
    if (file.is_open()) {
        string line;
        cout << "\nContents of f2.txt:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open f2.txt for reading\n";
    }
    
    
    file.open("f3.txt", ios::in);
    if (file.is_open()) {
        string line;
        cout << "\nContents of f3.txt:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open f3.txt for reading\n";
    }

    return 0;
}
