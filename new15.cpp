#include "iostream"
#include "iomanip"
using namespace std;

class p 
{
    int a,b;
    public:
    void getdatap()
    {
        cin >> a >> b;
    }
    void putdatap()
    {
        cout << endl << a << " " << b << endl;
    }
};
class c
{
    int x,y;
    public:
    void getdatac()
    {
        cin >> x >> y;
    }
    void putdatac()
    {
        cout << endl << x << " " << y << endl;
    }
};

void main()
{
    class p obj1;

}



 
/*

A charusat management system wants to manage employee nd student information . 
Employee have emp_id, emp_name, year_of_joining, teaching_employee will have area of specialisation , salary scale ,
and non-teaching employee will have fixed salary . 
Students have stu_id, stu_name, and cgpa . The system can add and retrive data of teaching employees , 
non-teaching employees and students . 

class emp_details
class teaching_emp_details
class non_teaching_emp_details
class stu_details

EMPLOYEE: (parent class)
    attributes: (private)
    emp_id ->
    emp_name ->
    yr_of_joining -> 

    member functions: (public)
    get_emp()
        -> input all attributes
    put_emp()
        -> display all attributes 
        


TEACHING_EMPLOYEE: (child class)
    attributes:
    specialisation ->
    scale -> 

    member functions:
    get_t_emp()
        -> 
    put_t_emp()
        -> 

    // this class will be inherited from EMPLOYEE (parent class)
    // so, get_emp() and put_emp() will be accessible here 

NON_TEACHING_EMPLOYEE: (child class)
    attribites:
    salary -> 

    member functions:
    get_nt_emp()
        -> 
    put_nt_emp()
        -> 

    // this class will be inherited from EMPLOYEE (parent class)
    // so, get_emp() and put_emp() will be accessible here 


STUDENT:
    attributes:
    stu_id -> 
    stu_name ->
    cgpa ->

    member functions;
    get_stu()
        ->
    put_stu()
        ->
    




how to inheritate 
class c : p 
(public of P will be in private of C)

class c : public p 
(public of P will be in public of C)


*/