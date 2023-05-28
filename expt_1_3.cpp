//Milan Kumar Parida T.E.7 L7 32320
#include <iostream>
#include <conio.h>
using namespace std;

// printed password

int main()
{ char password[55];
cout << "password:\n";
int p = 0;
do { password[p] = getch();
if (password[p] != '\r')
{
cout << "*";
}
p++;
}
while (password[p-1] != '\r');
password[p-1] = '\0';
cout << "\nYou have entered " << password << " as password.";
getch();
return 0;
} 