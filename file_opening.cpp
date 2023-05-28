#include <bits/stdc++.h>
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
    
    cout << "key: ";
    cin >> key;
 
    fstream fin, fout;
 
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
        int temp = (c + key);
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
    cout << "File encrypted successfully" << endl;
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
 
        int temp = (c - key);
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
    cout << "File decrypted successfully" << endl;
}
 
int main()
{
    encdec enc;
    char c;
    cout << "\n";
    cout << "Enter Your Choice : \n";
    cout << "1. encrypt \n";
    cout << "2. decrypt \n";
    cin >> c;
 
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