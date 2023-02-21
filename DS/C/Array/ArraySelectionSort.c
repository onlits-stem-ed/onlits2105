#include <stdio.h>
void display(int *arr, int size);
int main(int argc, char const *argv[])
{
    int arr[] = {12, 56, 96, 3, 45};
    printf("Array content before sorting:\n");
    display(arr, 5);
    //--Sorting code goes here

    printf("Array content after sorting:\n");
    display(arr, 5);
    return 0;
}

void display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }
}