// #include "iostream"
// #include "iomanip"
// #include "string.h"
// using namespace std;

// class abc
// {
//     // private:
//         int a;
//     public:
//         abc()
//         {
//             cout << "one object is created" << endl;
//         }
//         void getdata()
//         {
//             cin >> a;
//         }
//         void display()
//         {
//             cout << a << endl;
//         }
//         ~abc()
//         {
//             cout << "one object is deleted" << endl;
//         }
// };

// int main()
// {
//     class abc x;
//     x.getdata();
//     x.display();
//     class abc y,z;
//     y.getdata();
//     y.display();
//     z.getdata();
//     z.display();
// }

/*
    Q. U HAVE TO COUNT TOTAL NO. OF OBJETCS CREATED IN YOUR PROGRAM AND WHENEVER IT WILL 
    DELETE OBJECT FROM MEMORY , SHOW "ONE OBJ IS DELETED, __ ARE REMAINING ".
    WHEN LAST OBJECT IS DELETED, SHOW "ONE OBJ IS DELETED, 0 ARE REMAINING"
*/

#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;
int c=0, d;
class abc
{   
    int a=0;
    public:
    abc()
    {
        cout << "one object is created :) " << endl;
        c++;
        cout << c;
        system("CLS");
    }
    ~abc()
    {
        c--;
        cout << "1 object is deleted , " << c << " are active" << endl;
        
        
    }

};

//pRonak86 

int main()
{
    class abc x;
    class abc y,z,q;
    class abc l;


}