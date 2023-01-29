#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void print_stack(int *stack, int *size);
void pop(int *stack, int *size);
void push(int *stack, int *size);

int main()
{
    int stack[MAX], ch, size = 0;
    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Print stack\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            print_stack(stack, &size);
            break;
        case 2:
            push(stack, &size);
            break;
        case 3:
            pop(stack, &size);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void print_stack(int *stack, int *size) //n
{
    if (*size == 0)
    {
        printf("\nStack empty. Nothing to print.\n\n");
        return;
    }

    printf("\nPrinting stack content:\n");
    for (int i = 0; i < *size; i++)     //n
    {
        printf("%d\n", stack[i]);
    }
    printf("\nEnd of stack\n\n");
}

void push(int *stack, int *size)        //n (fair)
{
    if (*size == MAX)
    {
        printf("\nStack overflow. Cannot push anymore\n\n");
        return;
    }

    if (*size > 0)
    {
        for (int i = *size; i > 0; i--)
        {
            stack[i] = stack[i - 1];
        }
    }

    printf("\nEnter value: ");
    scanf("%d", &stack[0]);
    (*size)++;
    printf("\nData pushed.\n\n");
}

void pop(int *stack, int *size) //O(n)
{
    if (*size == 0)
    {
        printf("\nStack underflow. Cannot pop anything.\n\n");
        return;
    }

    for (int i = 0; i < *size; i++)
    {
        stack[i] = stack[i + 1];
    }

    (*size)--;
    printf("\nData popped.\n\n");
}