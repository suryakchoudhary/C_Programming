#include <stdio.h>
#include <string.h>

char Member(char *mom1, char *mom2)
{
    strcpy(mom1, "Vartika");
    strcpy(mom2, "Vartika");
    printf("%s and %s\n", mom1, mom2);
    return (*mom1, *mom2);
}

struct Family
{
    char mother[10];
    char father[10];
    int var;
};

void main()
{
    struct Family mem1, mem2;
    printf("%d, %d\n", sizeof(mem1), sizeof(mem2));
    Member(mem1.mother, mem2.mother);

    printf("%s and %s\n", mem1.mother, mem2.mother);
    if (strcmp(mem1.mother, mem2.mother) == 0)
    {
        printf("Name are same\n");
        printf("%s and %s\n", mem1.mother, mem2.mother);
    }
    else
    {
        printf("Names are different\n");
        printf("%s and %s\n", mem1.mother, mem2.mother);
    }
}