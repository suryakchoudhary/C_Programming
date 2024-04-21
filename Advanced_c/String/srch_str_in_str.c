#include <stdio.h>
#include <string.h>

void main()
{
    char text[] = "Surya Kant Choudhary";
    char str[] = "Kant";
    char *ptr = NULL;
    ptr = strstr(text, str);

    printf("%u\n", ptr);
    //for (int i = 0; ptr = ptr + i; i++)
    printf("%s\n", ptr);
    //printf("\n");
}