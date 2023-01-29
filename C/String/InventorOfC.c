#include <stdio.h>
#include <string.h>

int strcmpi(char *s1, char *s2);

int main()
{
    char answer[30];
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("Q. Who is the inventor of C?\n");
        printf("A. ");
        scanf("%[^\n]%*c", answer);
        if (strcmpi(answer, "Dennis Ritchie") == 0)
        {
            printf("Good!\n");
            break;
        }
        else
        {
            if(i<=2)
                printf("Try again!\n");
            else
                printf("You have exhausted all you attempts. The correct answer is Dennis Ritchie.\n");
        }
    }
    return 0;
}

int strcmpi(char *s1, char *s2)
{

    return 0;
}