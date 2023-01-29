#include <stdio.h>
#define MAX 5
int main()
{
    int age[MAX];
    
    printf("Enter the age of %d student below:\n", MAX);
    for(int i=0; i<MAX; i++)
    {
        scanf("%d", &age[i]);
    }

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (age[i] > age[j])
            {
                int t = age[i];
                age[i] = age[j];
                age[j] = t;
            }
        }
    }

    printf("The sorted array is:\n");
    for(int i=0; i<MAX; i++)
    {
        printf("%d\n", age[i]);
    }
    return 0;
}