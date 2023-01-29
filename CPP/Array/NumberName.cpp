#include <iostream>
using namespace std;
int main()
{
    int n;
    char names[][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1 || n > 10)
        cout << "value not in range" << endl;
    else
        cout << names[n] << endl;
    return 0;
}