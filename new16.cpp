#include "iostream"




/*
4 types of type conversion:

what is the need of this? : 
class complex { int real, int img }
complex c;
float x
x = 3.9 
c = x (where c is obj and x is var)
now...what i want is i want this 3 in real part and 9 in imaginary part 

    O R 

if i want to copy data of 2nd obj into 1st obj , we have 2 options:
a)  complex c1, c2;
    c2.getdata();
    c1 = c2;

b)  complex c2;
    c2.getdata();
    complex c1(c2);

1) basic to basic 
    int a 
    float b
    b = (float)a

2) basic to class
    create a constructor of class 


3) class to basic
    operator of basic datatype 
    operator float();       // no return type but still it can return smth 


4) class to class
    class circle
    { int r; }      // for ex. r is 4 

    class sq
    { int w, h; }       // as r was 4 , w and h should be 8

    inside main...
    circle c;
    c.getdata();
    sq s;
    s = 2c;      //here both are objects so in class to class conversion, we'll make constructor of ----

    --x--x--x--x--x--x--x--
    order: class square
           class circle
    so..."incomplete class" error will appear if u pass circle obj in square
    so...declare it first :)
    while doing class to class conversion , make sure to write class with const first, then class w/o const
    (: forward declaration issue :)



*/
