#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

// class A
// {
//     int a , b;
//     public:
//     void putdata()
//     {
//         cout << a << b << endl;
//     }
//     A(int v, int w)
//     {
//         a = v;
//         b = w;
//     }
// };
// class B : public A
// {
//     int c , d , e;

//     public:
//     void putdata()
//     {
//         cout << c << d << e << endl;
//     }
//     B(int v, int w, int x, int y, int z) : A(v,w)
//     {
//         c = x;
//         d = y;
//         e = z;
//     }

// };
// int main()
// {
//     int a, b, c, d, e;
//     cout << "enter 5 numbers : ";
//     cin >> a >> b >> c >> d >> e;
//     class B ob(a, b, c, d, e);
//     ob.putdata();
//     ob.A::putdata();
// }

// -------------------------------------------------------------------------------

// class A
// {
//     int x;
//     public:
//     void getdata()
//     { cin>>x; }
//     void putdata()
//     { cout<<x; }
//     A& inc()
//     {
//         // int x;
//         // cin >> this->x;
//         // cin >> x;
//         // this->x = this->x + x;
//         int p;
//         cin>>p;
//         x = x+p;
//         return *this;
//     }
// };

// int main()
// {
//     A oa;
//     oa.getdata();
//     oa.putdata();
//     A n;
//     n = oa.inc();
//     oa.putdata();
//     n.putdata();
// }

// -------------------------------------------------------------------------------

class E
{
    protected:
    int id;
    public:
    E(int x)
    { id = x; }
    virtual void putdata() = 0;
};
class TE : public E
{
    string d;
    public:
    TE(int x, string s) : E(x)
    { d = s; }
    void putdata()
    { cout << d << " " << id; }
};
int main()
{
    TE e(7, "abc");

}
/*
ABSTRACT CLASS : 
    1) object cannot be created
    2) has at least one pure virtual function 

PURE VIRTUAL FUNCTION : 
    1) pure function means it's a function will never ever have a body 
    2) initialise with 0 
    syntax: virtual return fun_name () = 0;
    ***if i create a pure virtual fn in patrent class , the same fn should be there in child class***
*/