// create a user defined function to add 2 numbers 
#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;
int add (int, int);
// int add (int, int, int);

int main()
{
    int x,y,z;
    cout << "enter numbers : ";
    cin >> x >> y >> z;
    // cout << add(x,y) << endl << add(x,y,z);
}

int add (int a, int b)
{
    return a+b;
}
// int add (int a, int b, int c) //correct (same name but diff. no. of parameters)
// {
//     return a+b+c;
// }

// int add (int a, int b)  // incorrect (same name but no. of parameters are same )
// {
//     return a*b;
// }