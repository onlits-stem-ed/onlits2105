#include <stdio.h>
int main()
{
    char str[50], str2[50];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);       //to read multi word string
    printf("Enter another string: ");
    scanf("%[^\n]", str2);
    printf("The entered string is:\n");
    printf("%s\n%s\n", str, str2);
    return 0;
}