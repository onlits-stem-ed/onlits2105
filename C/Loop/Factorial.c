#include <stdio.h>
int main()
{
    int n, fact=1;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for(int i=n; i>0; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d.\n", n, fact);
    return 0;
}