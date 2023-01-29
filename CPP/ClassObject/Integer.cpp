#include <iostream>
using namespace std;
class integer
{
    int i; // instance variable
public:
    integer() { i = 0; } // default constructor
    integer(int i)       // parameterized constructor
    {
        this->i = i;
    }

    integer operator+(integer x) // Operator overloading
    {
        integer sum;
        sum.i = this->i + x.i;
        return sum;
    }

    int get()
    {
        return this->i;
    }
};

int main(int argc, char const *argv[])
{
    integer a = 10, b = 20, c;
    c = a + b;
    cout << "c = " << c.get() << endl;
    return 0;
}

/*
    Function overloading (line # 7 and 8)
    Constructor overloading (")
*/