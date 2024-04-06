#include "iostream"
#include "string.h"
#include "iomanip"
using namespace std;
int point(int *)
// struct ulala 
// {
//     char name; 
//     int age[2];
//     int points;
//     int *ptr;
// }ulala[2];

int point(int *x)
{
    // int y;
    cout << endl << "inside func" << endl;

    return 0;
}
int main()
{ 
    int a=5, *ptr=&a;
    int **ptp = &(ptr);
    cout << "is this pointer?" << endl;
    cout << *ptr << endl;
    cout << **ptp;

    point(&a);
   /*
   a=3, b=4
   //c = sumsq(a,b)
   print(c)
   print(a,b)

   */ 
    
    // ptr = &a;
    // cout << "Beginning of code";
    // cout<<endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j=0; j<2; j++)
    //     {
    //         cout << "enter a number : ";
    //         cin >> ulala[i].age[j];
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j=0; j<2; j++)
    //     {
    //         cout << ulala[i].age[j] << " ";
    //     }
    // }
    
    
}