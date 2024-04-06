#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;
// enum color {red=5, yellow=10, blue, green};
// enum color a;


struct student 
{
    private:
    int r_no;

    public:
    void getdata()
    { cin >> r_no  /*e_no*/;}
    void putdata()
    { cout << r_no << " " << /*e_no*/  endl;}
};

struct employee 
{
    private:
    int e_no;

    public:
    void getemp()
    { cin >> /*r_no*/  e_no;}
    void putemp()
    { cout << /*r_no*/  " " << e_no << endl;}
};


int main()
{
    // a = green;
    // cout << a << endl;
    // struct student s2;
    // cin >> s2.r_no;
    // s2.getdata();
    // s2.putdata();
    struct student A;
    struct employee B;
    A.getdata();
    A.putdata();
    B.getemp();
    B.putemp();
    
}


/*what is size of enum var ?*/