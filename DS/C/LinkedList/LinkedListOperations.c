#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

void print_list();
void append();
void insert();
void delete_end();
void delete ();
void search();

NODE *head = NULL;

int main()
{
    int ch;
    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Print list\n");
        printf("2. Append data\n");
        printf("3. Delete from end.\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            print_list();
            break;
        case 2:
            append();
            break;
        case 3:
            delete_end();
            break;
        default:
            printf("\nInvalid option.\n\n");
        }
    }
    return 0;
}

void print_list()
{
    if (head == NULL)
    {
        printf("\nThe list is empty, there is nothing to display.\n\n");
        return;
    }

    NODE *current = head;
    printf("\nThe list contain the following values:\n");
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("\n-------- End of list -------\n\n");
}

void append()
{
    if (head == NULL) // code for the first node
    {
        head = malloc(sizeof(NODE));
        printf("\nEnter a value: ");
        scanf("%d", &head->data);
        head->next = NULL;
        printf("\nData appeded to list.\n\n");
        return;
    }

    NODE *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = malloc(sizeof(NODE));
    printf("\nEnter a value: ");
    scanf("%d", &current->next->data);
    current->next->next = NULL;
    printf("\nData appeded to list.\n\n");
}

void insert()
{
}

void delete_end()
{
    if (head == NULL)
    {
        printf("\nThe list is empty, nothing to delete.\n\n");
        return;
    }

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nData deleted.\n\n");
        return;
    }

    NODE *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;
    printf("\nData deleted.\n\n");
}

void delete ()
{
}

void search()
{
}