#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float total;
};
void ReadItem(struct item *i)
{
    printf("Enter the item name: ");
    scanf("%s", i->itemName);

    printf("Enter the quantity: ");
    scanf("%d", &i->quantity);

    printf("Enter the price of item: ");
    scanf("%f", &i->price);

    i->total = (i->quantity) * (i->price);
}

void PrintItem(struct item *p)
{
    printf("Item name: %s\n", p->itemName);
    printf("Item quantity: %d\n", p->quantity);
    printf("Item price: %f\n", p->price);
    printf("Total: %f\n", p->total);
    //printf("Total: %f\n", (p->quantity) * (p->price));
}

void main()
{
    int chsize;
    struct item *ptr, shop;
    ptr = &shop;
    printf("Enter the size of char you want: ");
    scanf("%d", &chsize);
    ptr->itemName = (char *)calloc(chsize, sizeof(char));
    if (!ptr)
    {
        printf("Memory not allocated\n");
        exit(-1);
    }
    ReadItem(ptr);
    PrintItem(ptr);
    free(ptr);
    ptr = NULL;
}