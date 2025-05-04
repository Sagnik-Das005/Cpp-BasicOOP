#include <iostream>
#include <string>
using namespace std;
class MyException {
    public:
        string str_what;
        int what;
        MyException() { str_what; what = 0; }
        MyException(string x, int e) {
        str_what = x;
        what = e;
        }
};

int main()
{
    int i;
    try {
            cout << "Enter a positive number: ";
            cin >> i;
            if(i<0)
                throw MyException("Not Positive", i);
            else if(i==0)
                throw MyException("Zero", i);
            else if(i>100)
                throw MyException("Too large", i);
            else
                cout << "You entered: " << i << "\n";
        }
    catch (MyException e) { // catch an error
            cout << e.str_what << ": ";
            cout << e.what << "\n";
        }
    return 0;
}