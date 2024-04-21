#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *temp;

void enqueue()
{

    struct node *newnode = NULL;
    int user = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for the node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void display()
{
    //struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int input;
    while (1)
    {
        printf("1. Enqueue\n");
        printf("2. Display\n");
        printf("3. Exit\n");

        printf("Please enter your choice: ");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            enqueue();
            printf("\n");
            break;

        case 2:
            display();
            printf("\n");
            break;

        case 3:
            exit(-1);
            break;
        }
    }
}