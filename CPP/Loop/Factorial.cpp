#include <iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout << "Please enter a number: ";
    cin >> n;
    for(int i=n; i>0; i--)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n <<" is " << fact <<"." << endl;
    return 0;
}