#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

// FUNCTION OVERRIDING (1/4/24)

// class A
// {
//     int a;
//     public:
//     void getdata()
//     { cin >> a; }
//     void putdata()
//     { cout << a; }
// };

// class B : public A
// {
//     int b;
//     public:
//     void getdata()
//     { cin >> b; }
//     void putdata()
//     { cout << b; }
// };

// int main()
// {
//     B b;
//     b.getdata();
//     b.putdata();
//     b.A::getdata();
//     b.A::putdata();
// }

class A
{
    public:
    A()
    { cout << "obj of A is created"; }
    ~A()
    { cout << "obj of A is deleted"; }
};

class B : public A
{
    public:
    B()
    { cout << "obj of B is created"; }
    ~B()
    { cout << "obj of B is deleted"; }
};

int main()
{
    // A oa;    //1

    // B ob;    //2   

    // B *p;    //3
    // p = new B();
    // delete p; 

    // B *p;    //4
    // p = new B[3];
    // delete[] p;

}

/*


*/