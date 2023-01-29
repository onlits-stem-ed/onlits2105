#include <stdio.h>
#define MAX 5
int main()
{
    int age[MAX], sum=0, avg;
    printf("Enter the age of %d student below:\n", MAX);
    for(int i=0; i<MAX; i++)
    {
        scanf("%d", &age[i]);
        sum = sum + age[i];
    }
    avg = sum/MAX;
    printf("The average is %d.\n", avg);
    return 0;
}