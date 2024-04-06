#include "iostream"
#include "string.h"
#include "iomanip"
using namespace std;
int main()
{
    int a;
    float b=7.53;
    string str;
    char str2[12];

    cout << "enter a number : ";
    cin >> a;
    cout << endl << endl;
    for (int i=1; i<=10; i++)
    {
        cout << setw(2) <<a*i << endl;
    }

    // getline(cin,str);
    // cout << str << endl;
    // cin.getline(str2,12);
    // cout << str2;
    // cout << "Hi " << endl;
    // cout << a << endl;
    // cout << a << " " << b << endl;
    // cout << "Hi " << a << " Bye";
    // cout << "Hi" << endl << "Bye";
    // cout << fixed << setprecision(4) << b;

    // cin >> a;
    // cout << a << " " << b;


}
/*
    endl is a manipulator 
    whereas \n is a character
    ex: 
    char x = "\n";

    round off issue when set precision is 8

*/
