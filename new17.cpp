#include "iomanip"
#include "iostream"
#include "string.h"
using namespace std;

class cl
{
    private:
    float temp_c;
    public:
    cl()
    {

    }

};

class fr 
{
    private:
    float temp_f;
    public:
    fr()
    {
        
    }
};


int main()
{

    /*
    class cl c1(10), c2;
    c2=11.0;
    class fr f1(58), f2;
    f2=36.0;
    float f = c1;
    cout << "f = "<<f;
    float b = f1;
    cout << "b = "<<b;

    // f2 = c2;
    */


}



/*

               |      source      | destination |

basic -> class |       ----       | constructor |
class -> basic | casting operator |     ----    |
class -> class | casting operator | constructor |


*/