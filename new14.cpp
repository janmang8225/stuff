#include "iostream"
#include "iomanip"
using namespace std;

void function(float &num1, float &num2)
{
    if(num1>33000 && num2>33000)
    {
        float temp;
    }
    else
    {
        int temp;
    }

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    float n1, n2;
    cout << "enter 2 numbers : ";
    cin >> n1 >> n2;
    function(n1,n2);
    cout << "n1 = " << n1 << " n2 = " << n2;
}
