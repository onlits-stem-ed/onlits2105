#include <stdio.h>
#define MAX 10
int main()
{
    int value, flag=0;
    int arr[MAX] = {25, 89, 10, 5, 76, 32, 55, 96, 21, 49};
    printf("Enter the value to search: ");
    scanf("%d", &value);
    for (int i = 0; i < MAX; i++)
    {
        if(arr[i] == value)
        {
            printf("The value %d found at index %d.\n", value, i);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        printf("The value %d not found.\n", value);
    }
    return 0;
}