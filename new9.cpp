#include "iostream"
#include "string.h"
#include "iomanip"
using namespace std;
void display ();
void getdata();

class abc
{
    private:
    int a;
    float b;
    // float a1, a2; // for addition and subtraction of 4 parameters (>_<)

    public:

    // abc()    // this is default constructor
    // {
    //     a=0;
    //     b=0.0;
    // };

    // abc (int a, int b, int c, int d)
    // {
    //     a1 = a+b;
    //     a2 = a-b;
    // }

    // abc()        // below 4 constructors are parameterised constructors 
    // {
    //     a=1;
    //     b=0.0;
    // }
    // abc(int x)
    // {
    //     a=x;
    // }
    // abc(int x, int y)
    // {
    //     b = y-x;
    // }
    // abc(int x, int y, int z)
    // {
    //     a = x;
    //     b = y - z;
    // }

    // abc()       // copy constructors
    // {
    //     a=1;
    //     b=2;
    // }       
    abc(int x, int y)
    {
        a=x;
        b=y;
    }
    abc (abc &x)
    {
        a=x.a;
        b = x.b;
    }
    void getdata()
    {
        cin >> a >> b;
    }
    void display()
    {
        // cout << a1 << " " << a2 << endl;
        // cout << a << " " << b << endl;
        cout << a << " " << b << endl;
    }
};

int main()
{
    // class abc A(1,2,3,4);
    // class abc A, B(3), C(3,7), D(3,7,5);
    // A.display();
    // B.display();
    // C.display();
    // D.display();
    class abc A(1,2);
    A.getdata();
    A.display();
    class abc B(A);     // B is a copy of A so it is called copy construcutor
    B.display();



    // A.getdata();
    // A.display();
    return 0;
}

/*
    diff. b/w normal member fn. and constructor
    nm: we have to call
    cons: gets called automatically


    when we create a object, which function is automatically called? it is CONSTRUCUTOR :)

    if there exist a copy constructor:
        we need a parameterised or a 

    q. create a constructor which will count the number of objects.
        (indirectly...how many times it will call)


    name of cons = same as class name
    may or may not have arg
    don't have any parameter (if its default const)
    they dont hav ereturn type
    we dont call constructor, they get called automatically
    they dont have return type; not even void 

*/