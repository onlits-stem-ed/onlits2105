#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    printf("Enter %d integers below:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array contains the following elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}