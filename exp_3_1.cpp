//Milan Kumar Parida T.E.7 L7 32320
#include <iostream>
#include <fstream>
using namespace std;
class encdec {
int key;
string file = "sample.txt";
char c;
public:
void encrypt();
void decrypt();
};
void encdec::encrypt()
{
// Key to be used for encryption
cout << "key: ";
cin >> key;
// Input stream
fstream fin, fout;
// Open input file
// ios::binary- reading file
// character by character
fin.open(file, fstream::in);
fout.open("encrypt.txt", fstream::out);
// Reading original file till
// end of file
while (fin >> noskipws >> c) {
int temp = (c + key);
// Write temp as char in
// output file
fout << (char)temp;
}
fin.close();
fout.close();
}
void encdec::decrypt()
{
cout << "key: ";
cin >> key;
fstream fin;
fstream fout;
fin.open("encrypt.txt", fstream::in);
fout.open("decrypt.txt", fstream::out);
while (fin >> noskipws >> c) {
// Remove the key from the
// character
int temp = (c - key);
fout << (char)temp;
}
fin.close();
fout.close();
}
int main() {
// Create and open a text file
ofstream MyFile("filename.txt");
// Write to the file
string str;
cout<<"Enter text to file"<<endl;
getline(cin,str);
MyFile << str;
// Close the file
MyFile.close();
encdec enc;
char c;
cout << "\n";
cout << "Enter Your Choice :\n";
cout << "1. Encryption \n";
cout << "2. Decryption \n";
cin >> c;
cin.ignore();
switch (c) {
case '1': {
enc.encrypt();
break;
}
case '2': {
enc.decrypt();
break;
}
}
}