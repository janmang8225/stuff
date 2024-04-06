#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

// int a=10;
// int main()
// {
//     char a='x';
//     cout << ::a;
// }

class abc
{
    private:
    int a;
    float b[3];

    public:
    void getdata();
    int putdata(int);
};

void abc::getdata()
{
    cin >> a >> b[0] >> b[1] >> b[2];
}

int abc::putdata(int z)
{
    // cout << a << b[0] << b[1] << b[2];
    if (a>z)
        cout << "yes";
}

int main()
{
    class abc x,y;         // or we can do z[3] 
    int p=45;     
    cout << "is this running?" << endl;
    x.getdata();
    y.getdata();
    // x.putdata();
    // cout << endl;
    // y.putdata();
    
    x.putdata(p);
}
