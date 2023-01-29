#include <stdio.h>
int main()
{
    int *p, v=10;
    p = &v;
    printf("The addss of p is %p.\n", &p);
    printf("The content of p (address of v) is %p.\n", p);
    printf("The value at the address at which p is pointing (value of v) is %d.\n", *p);
    printf("The address of v is %p.\n", &v);
    printf("The content of v is %d.\n", v);
    return 0;
}