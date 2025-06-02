// #include<iostream>
// #include<string.h>
// using namespace std;


// int main()
// {
//     string test;
//     string email;
//     bool ischar();
//     bool isvalid(string);
//     cin>>email;
//     test=email;


//     try
//     {
//         if(isvalid(test))
//         {
//             cout<<"Email ID is valid.";

//         }
//         else{
//             throw 'c';
//         }
//     }
//     catch(char c)
//     {
//         cout<<"Exception Caught...\nInvalid Email Id!!!";
//     }
//     return 0;
    
//     bool ischar(char ch)
//     {
//         return((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'));
//     }

//     bool isvalid(string email)
//     {
//         if(!ischar(email[10])){
//             return 0;

//             int at = -1;
//             int dot = -1;
//             int length = email.size();

//         }

//         for(int i=0; i<length; i++)
//         {
//             if(email[i]=='@')
//             {
//                 at=i;
//             }
//             if(email[i]=='.')
//             {
//                 dot=i;
//             }
//         }
//         if(at==-1 || dot==-1){
//             return 0;
//         }
//         if(at>dot)
//         {
//             return 0;
//         }
//         return !(dot >= (length-1));
//     }
// }


//write a program to ask a user to enter the mobile number including
// country code and validate whether it is correct or incorrect if 
//it is incorrect throw the exception else display the message the number is correct

#include <iostream>
#include <string>
#include <stdexcept>

class InvalidMobileNumberException : public std::exception {
    std::string message;
public:
    InvalidMobileNumberException(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

bool validateMobileNumber(const std::string& mobileNumber) {
    if (mobileNumber.size() != 13) 
        throw InvalidMobileNumberException("Mobile number must have exactly 13 characters.");
    if (mobileNumber.substr(0, 3) != "+91") 
        throw InvalidMobileNumberException("Mobile number must start with '+91'.");
    for (size_t i = 3; i < mobileNumber.size(); ++i) {
        if (!isdigit(mobileNumber[i])) 
            throw InvalidMobileNumberException("Mobile number must contain only digits after '+91'.");
    }
    return true;
}

int main() {
    std::string mobileNumber;
    std::cout << "Enter your mobile number including India country code (+91): ";
    std::cin >> mobileNumber;
    try {
        if (validateMobileNumber(mobileNumber)) 
            std::cout << "The mobile number is correct.\n";
    } catch (const InvalidMobileNumberException& e) {
        std::cout << "Error: " << e.what() << '\n';
    }
    return 0;
}
