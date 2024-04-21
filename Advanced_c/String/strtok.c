#include <stdio.h>
#include <string.h>

void main()
{
    char string[] = "Surya - Kant - Choudhary";
    char tok[] = "-";
    char *ptr = NULL;
    ptr = strtok(string, tok);

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strstr(NULL, tok);
    }
}