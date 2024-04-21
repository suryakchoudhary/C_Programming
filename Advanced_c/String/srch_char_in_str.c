#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Surya Kant Choudhary";
    char ch = 'K';
    char *ptr = NULL;
    ptr = strchr(str, ch);
    printf("%u\n", ptr);
    printf("%c\n", *ptr);
}