#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int num = 0, rand_num, upper = 50, lower = 10, count = 0;
    srand(time(NULL));
    rand_num = rand() % (upper - lower + 1) + lower;
    printf("RANDOM : %d.........\n", rand_num);
    printf("You will get only 5 chances\n");
    while (1)
    {
        count++;
        printf("Enter your guess between 10 to 50\n");
        scanf("%d", &num);
        if (rand_num == num)
        {
            printf("Congratulations you won the game\n");
            break;
        }
        else
        {
            printf("Chances left = %d\n", (5 - count));
            if (10 > num || 50 < num)
            {
                printf("The guess should be between %d and %d\n", lower, upper);
            }
            else if (num > rand_num)
            {
                printf("Your guess is high = %d\n", num);
            }
            else // if (num < rand_num)
            {
                printf("Your guess is low = %d\n", num);
            }
        }
        printf("\n\n");
        if (count == 5)
        {
            printf("You lost the game\n");
            break;
        }
    }
}