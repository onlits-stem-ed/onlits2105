#include <stdio.h>
int main()
{
    int matrix[3][3];
    printf("Enter the elements of a 3 x 3 matrix:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The require matrix is:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}