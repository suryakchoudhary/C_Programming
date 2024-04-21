#include <stdio.h>
#include <stdlib.h>

int mem(int num, int *cptr)
{
    printf("Enter %d integers\n", num);
    for (int i = 0; i < num; i++)
        scanf("%d", cptr + i);

    printf("The integer entered are: ");
    for (int i = 0; i < num; i++)
        printf("%d ", *(cptr + i));
    printf("\n");
}
void main()
{
    int num;
    int extend = 0;

    printf("Enter the number of integer you want to enter: ");
    scanf("%d", &num);
    int *cptr = (int *)calloc(num, sizeof(int));
    if (!cptr)
    {
        printf("Program exited, no memory allocated\n");
        exit(1);
    }
    mem(num, cptr);

    extend = 1;
    while (extend)
    {
        printf("Would you like to enter more integers, enter 0 or 1: ");
        scanf("%d", &extend);
        switch (extend)
        {
        case 0:
            printf("Ok, the program exited\n");
            break;
        case 1:
            printf("Enter the number of integers you want to enter more: ");
            scanf("%d", &num);
            cptr = (int *)realloc(cptr, (num * sizeof(int)));
            mem(num, cptr);
            break;
        }
    }
    free(cptr);
    cptr = NULL;
}