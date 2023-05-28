#include <iostream>
#include <conio.h>
#include <string> 
using namespace std; 

// default password

int main() { 
string username, password;
cout << "Enter your username: "; 
cin >> username;
cout << "Enter your password: ";
char ch;
while (true) { ch = getch();
if (ch == '\r') { 
    break;
}
password += ch; 
cout << '*';

}
 
string default_password = "password";
if (password == default_password) {
cout << endl << "You are using the default password. Please change your password." << endl;

string new_password;
cout << "Enter a new password: ";
cin >> new_password;

string confirm_password;
cout << "Confirm your new password: "; 
cin >> confirm_password;

password = new_password;
cout << "Password changed successfully!" << endl;
}
 else {
cout << "Password confirmation failed. Please try again." << endl;
}

// Proceed with the rest of the program...
 return 0;
}
