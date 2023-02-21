#include <stdio.h>

#define MAX 10

int main()
{
    int stack[MAX], size=0, top=-1;

    printf("Enter 5 integers below: ");
    top = 0;
    for(int i=1; i<=5; i++)             //pushing 5 elements
    {
        for(int j=size; j>0; j--)
        {
            stack[j] = stack[j -1];
        }
        scanf("%d", &stack[top]);
        size++;
    }

    printf("Stack Trace:\n");
    for(int i=0; i<size; i++)       //traversing stack
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}