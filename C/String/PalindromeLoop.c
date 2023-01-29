#include <stdio.h>
int len(char *str);
int palindrome(char *str);
int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    if(palindrome(str) == 1) {
        printf("%s is palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palidrome.\n", str);
    }
    return 0;
}

int len(char *str)
{
    int i=0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

int palindrome(char *str)
{
    int i, l, p=1;
    l = len(str);
    for(i=0; i<=l/2; i++)
    {
        if(str[i] != str[l-i-1])
        {
            p = 0;
            break;
        }
    }
    return p;
}