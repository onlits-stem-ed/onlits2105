#include <stdio.h>
void swap(int *p, int *q);
int main()
{
    int a = 10, b = 20;
    printf("The values of a and b before swapping are %d and %d, respectively.\n", a, b);
    swap(&a, &b);
    printf("The values of a and b after swapping are %d and %d, respectively.\n", a, b);
    return 0;
}

void swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}