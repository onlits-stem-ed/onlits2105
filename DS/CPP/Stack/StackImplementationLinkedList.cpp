#include <iostream>
using namespace std;

namespace stack
{
    class node
    {
        int data;
        node *next;
    public:
        node()          //default constructor
        {
            data = 0;
            next = NULL;
        }
    };

    class stack
    {
        node *head;
    public:
        stack()
        {
            head = NULL;
        }
    };
}

int main()
{

}