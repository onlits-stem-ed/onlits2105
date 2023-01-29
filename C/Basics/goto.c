#include <stdio.h>
int main()
{
    goto label;

    printf("This line will not be printed.");

    label:
        printf("Hello goto!\n");
    return 0;
}