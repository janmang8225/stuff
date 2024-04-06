#include "iostream"
#include "iomanip"
#include "string.h"
using namespace std;

class abc
{
    private:
    int a;
    static int ct;
    public:
    abc()
    {
        ct++;
    }
    void displayct()
    {
        cout << ct;
    }
};
int abc::ct=0;
int main()
{
    class abc A, B;
    A.displayct();
}

