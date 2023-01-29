#include <iostream>
using namespace std;
int main()
{
    int n, i, greatest;
    cout << "Enter 10 integers below:" << endl;
    for (i = 1; i <= 10; i++)
    {
        cin >> n;
        if (i == 1)
        {
            greatest = n;
        }
        else
        {
            if (greatest < n)
                greatest = n;
        }
    }
    cout << "Greatest integer: " << greatest << endl;
    return 0;
}

/*
45
5
67
88
99
12
34
75
3
44
*/