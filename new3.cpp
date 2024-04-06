#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;
// call by address
// void swap (int *, int *);
 
// call by ref. 
void swap(int &, int &); 

int main ()
{
    int a=10,b=20;
    cout << a << b << endl;
    // call by address
    // swap(&a,&b);  

    //call by ref.
    swap(a,b); 
    cout << a << b << endl;
    return 0;
}

// call by address
// void swap (int* x, int* y)  
// {
//     int t;
//     t=*x;
//     *x=*y;
//     *y=t;
// }

// call by referance
void swap (int &x, int &y)  
{
    int t;
    t=x;
    x=y;
    y=t;
} 