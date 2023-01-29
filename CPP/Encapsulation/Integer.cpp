#include <iostream>
using namespace std;

class integer {
    int i;
public:
    integer(int i)
    {
        this->i = i;
    }

    void set(int i)
    {
        this->i = i;
    }

    int get()
    {
        return i;
    }
};

int main()
{
    integer a(10);
    a.set(20);
    a = 30;
    cout << a.get() << endl;
    return 0;
}