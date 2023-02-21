#include <stdio.h>
int main()
{
    int array[] = {12, 56, 96, 3, 45};
    int *arr = array;
    printf("The elements of array are:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *arr);
        arr++;
    }
    return 0;
}