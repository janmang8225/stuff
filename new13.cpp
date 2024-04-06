#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;


// class abc
// {   
//     private:
//     int a,b;

//     public:
//     void getdata()
//     {
//         cout << "enter a and b : ";
//         cin >> a >> b;
//     }
//     void doubledata()
//     {
//         a = a*2;
//         b = b*2;
//     }
//     void putdata()
//     {
//         cout << endl << "a and b are : " << a << " " << b;
//     }

// };

// int main()
// {
//     class abc A, B;
//     A.getdata();
//     A.doubledata();
//     A.putdata();
// }


/*
diff between procedural nd OOP 

4 pillar of OOP : inheritance , polymorphism , encapsulation, abstraction


what is polymorphism: fn overloading, operator overloading
{ same name but different work to be served }

cin, cout
what is cin and cout? they are objects of iostream class 
full form : console input and console output 
what is work of cin, cout: used for taking input, nd displaying output on screen 

iostream: i=input , o=output, it is class of input-output stream 
concept of inheritance 

what is getline: used to take string as input
default delimitor : new line 

setprecision 1 : 13.75 -> 1 
fixed >> setpricision 1 : 13.75 -> 13.7 

setw: defines the space in which u want to print the output 

structure of c: only consisiting of data , no access specifier

class of c++ : consisting of data and function both , contain access specifier 

in my class if i create smth as private, public part of class can access private part of class 

ex: 
    private:
    int a,b;
    void ddata()
    {

    }

    public:
    void getdata()

if i want to call ddata, either i can call it under GETDATA fn , it is called nested function call


UNIT - 3:
dynamic memory allocation:
    2 keywords: new nd delete

what if i write... int *p, *q;
    p = new int;
    q = new int[20];

    p = one block of int datatype is allocated
    q = array of int will be created so 20 blocks will be created and q will be pointing to 1st block 

    if want to dlt:
    delete p;
    delete[] q; , if u write delete q , it won't give u error, but...when p is deleted, it is sent to garbage collector, 
    array of q won't be deleted until end of program, 

    creation of obj:
    class abc *p, *q;
    p = new abc;
    q = new abc[20];

    how to access: 
    p -> a = 10;
    p->func();

REFERENCE VARIABLE:
    same memory with 2 name, it is accessing 2 diff names
        highest security of data: call by value
        lowest memory consumption: call by ref.
        less processing time: call by ref. 

scope resolution operator: with class nd without class

diff b/w \n and endl
end is manipulatio , don't occupy space , be default flush ur buffer
\n is a char , it occupy space , not flush buffer

polymorphism:
fn overloading: more than 1 func with same name, diff number of parameters 
    int f (int , int)
    float f (float, int)
is it ok?
NO, bcoz return type is diff , parameters datatype are diff 

conditions:
    name of func must be same
    // it is case sensitive
    
what is default argument: 
start providing default parameter from right hand side, once stopped, dont star again,

static var and static func:
static var. : it will be created for all object or is it shared?
    initialised only 1 time , it is initialised outside the class
    inside class;       static int a;
    outside class:      
    if i dont create obj, still memory is alocated to static var,

    all member fn of a class can access the static var> T
    static fn: it can access the access> T
    static fn can access normal data fn> F
    when we call regular member fn : we call by creating ibj
    how to call static fn? CLASS NAME :: NAME_OF_FN (actual parameter)
    
    what is const: const fn are members of class but they can access the data member, but not modify data members

*/