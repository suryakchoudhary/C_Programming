#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *mptr = NULL;
    int num;
    printf("Enter number of integers you want to enter: \n");
    scanf("%d", &num);
    mptr = (int *)malloc(num * sizeof(int));

    printf("Enter %d integers: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", (mptr + i));
    }

    printf("Integer entered are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", *(mptr + i));
    }
    printf("\n");

    free(mptr);
    mptr = NULL;
}