#include "iostream"
#include "string.h"
#include "iomanip"
using namespace std;

class book
{
    private:
    string BookTitle, BookAuthor;
    boolean AvailStatus;

    public:
    void InsertBookDetail()
    {
        cout<<"enter book title : ";
        cin>> BookTitle;
        cout<<"enter book author";
        cin>> BookAuthor;
        AvailStatus=True;
    }
    boolean UpdateBook(string BT)
    {
        if (strcmp(BookTitle, BT)==0)
        {
            if (AvailStatus==True)
                AvailStatus=False;
            else
                AvailStatus=True;
            return True;
        }
        else
            return False;
    }

}