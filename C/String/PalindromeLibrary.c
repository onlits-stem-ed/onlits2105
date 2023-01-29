#include <stdio.h>
#include <string.h>
void strrev(char *s);

int main()
{
    char str[50], rev[50];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(str, rev) == 0)
        printf("%s is palindrome\n", str);
    else
        printf("%s is not a palindrome.\n", str);
    return 0;
}

void strrev(char *s)
{
    char t;
    int i;
    int l = strlen(s);
    for (i = 0; i < l / 2; i++)
    {
        t = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = t;
    }
}