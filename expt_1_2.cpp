//Milan Kumar Parida T.E.7 L7 32320
#include <iostream>
using namespace std;

// plaintext password

int main()
{
string password="admin";
cout<<"Enter the default password"<<endl;
string passin;
getline(cin,passin);
if(passin==password)
{
cout<<"Correct password"<<endl;
}
else
{
cout<<"wrong password"<<endl;
}
}