#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *head = NULL;

void print_stack();
void push();
void pop();

int main()          //n
{
    int ch;         //1
    while (1)       //n
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
            print_stack();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
    return 0;       //1
}

void print_stack()      //n
{
    if(head == NULL)    //1
    {
        printf("\nStack is empty. Nothing to print\n\n"); //1
        return; //1
    }

    NODE *current = head;
    printf("\nThe content of the stack is:\n");
    while(current != NULL)  //n
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("End of stack\n\n");
}

void push()     //1 (Excellent)
{
    if(head == NULL)
    {
        head = malloc(sizeof(NODE));
        head->next = NULL;
    }
    else
    {
        NODE *temp = head;
        head = malloc(sizeof(NODE));
        head->next = temp;
    }

    printf("\nEnter value: ");
    scanf("%d", &head->data);
    printf("\nData pushed\n\n");
}

void pop()      //O(1)
{
    if(head == NULL)
    {
        printf("\nStack empty. Nothing to pop.\n\n");
        return;
    }

    NODE *temp = head->next;
    free(head);
    head = temp;
    printf("\nData popped\n\n");
}