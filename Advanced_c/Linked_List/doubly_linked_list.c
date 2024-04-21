#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
} *head = NULL, *temp;

void enqueue()
{
    struct node *newnode, *tempnxt, *tempprev;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &newnode->data);
    printf("pppppppppp: %d\n", newnode->data);
    newnode->pre = NULL;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->pre = temp;
        temp = newnode;
    }
}

void display()
{
    temp = head;
    if (head == NULL)
        printf("Doubly linked list is empty\n");
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

        printf("Enter your choice: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            enqueue();
            break;

        case 2:
            display();
            printf("\n\v");
            break;

        case 3:
            exit(-1);
            break;
        }
    }
}