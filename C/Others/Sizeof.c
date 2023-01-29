#include <stdio.h>
int main()
{
    int arr[10];
    printf("The size of int is %ld bytes.\n", sizeof(int));
    printf("The size of float is %ld bytes.\n", sizeof(float));
    printf("The size of double is %ld bytes.\n", sizeof(double));
    printf("The size of int* is %ld bytes.\n", sizeof(int*));
    printf("The size of float* is %ld bytes.\n", sizeof(float*));
    printf("The size of double* is %ld bytes.\n", sizeof(double*));
    printf("The address of arr is %p\n", arr);
    printf("The address of arr[0] is %p\n", &arr[15]);
    return 0;
}