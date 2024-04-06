/*
#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

class abc
{
    public:
    void getdata(int x=0, int y=0)
    {
        cout << x << " " << y << endl;
    }

    // function overloading 
    void getdata2()
    {
        int x=0, y=0;
        cout << x << " " << y << endl;
    }
    void getdata2(int x)
    {
        int y=x;
        cout << x << " " << y << endl;
    }
    void getdata2(int x, int y)
    {
        cout << x+y << " " << x-y << endl;
    }
};
*/

/*
int main()
{
    int a=3, b=5;
    class abc A, B, C;
    A.getdata();
    B.getdata(a);
    C.getdata(a,b);
    cout << endl;
    // function overloading 
    A.getdata2();
    B.getdata2(a);
    C.getdata2(a,b);

}
*/


/*

ques 1.

    assign values to 1st object, values of 2nd object will be twice as of values of 1st object 
    no. of fn creare = 3
    1 = to create data
    2 = display
    3 = double 1 obj and assign in oother obj


ques2. 

object created = 3
    3rd obj : addition of first 2 obj
    (input in A and B obj)
    3 functions creation
    1: input 
    2: display
    3: addition 
*/

#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

class abc
{
    private:
    int a,b;

    public:
    abc()
    {
        getdata();
    }
    void getdata()
    {
        cin >> a >> b;
    }
};

int main()
{
    class abc A, B;

}