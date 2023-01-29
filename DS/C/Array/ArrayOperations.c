#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void display_list(int *arr, int *size);
void append_list(int *arr, int *size);
void insert_index(int *arr, int *size);
void delete_last(int *arr, int *size);
void delete_index(int *arr, int *size);

int main()
{
    int arr[MAX];
    int size = 0, ch;
    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Display list (traversal)\n");
        printf("2. Append to list\n");
        printf("3. Insert at a particular index\n");
        printf("4. Delete from end\n");
        printf("5. Delete from a particular index\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye\n\n");
            exit(0);
            break;
        case 1:
            display_list(arr, &size);
            break;
        case 2:
            append_list(arr, &size);
            break;
        case 3:
            insert_index(arr, &size);
            break;
        case 4:
            delete_last(arr, &size);
            break;
        case 5:
            delete_index(arr, &size);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    }
}

void display_list(int *arr, int *size)
{
    if (*size == 0)
    {
        printf("\nList is empty. Nothing to display\n\n");
        return;
    }

    printf("\nThe list contains following elements:\n");
    for (int i = 0; i < *size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void append_list(int *arr, int *size)
{
    if (*size >= MAX)
    {
        printf("\nOverflow: list is full, cannot accept anymore\n\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;
    printf("\nData appended\n\n");
}

void insert_index(int *arr, int *size)
{
    int index;
    if (*size >= MAX)
    {
        printf("\nOverflow: list is full, cannot accept anymore\n\n");
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if (index >= *size)
    {
        printf("\nOut of range index\n\n");
        return;
    }

    for (int i = *size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    printf("Enter value: ");
    scanf("%d", &arr[index]);
    (*size)++;
    printf("\nData inserted\n\n");
}

void delete_last(int *arr, int *size)
{
    if (*size <= 0)
    {
        printf("\nList is empty. Nothing to delete.\n\n");
        return;
    }

    (*size)--;
    printf("\nData deleted.\n\n");
}

void delete_index(int *arr, int *size)
{
    int index;
    if (*size <= 0)
    {
        printf("\nList is empty. Nothing to delete.\n\n");
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if(index >= *size)
    {
        printf("\nOut of range index\n\n");
        return;
    }
    for (int i = index; i <= *size - 1; i++)
    {
        arr[i] = arr[i+1];
    }

    (*size)--;
    printf("\nData deleted.\n\n");
}