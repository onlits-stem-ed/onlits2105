#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, gcd;
    printf("Enter two number below:\n");
    scanf("%d%d", &a, &b);
    int l = a < b ? a : b;
    for (int i = 1; i <= l; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD is %d.\n", gcd);
    return 0;
}