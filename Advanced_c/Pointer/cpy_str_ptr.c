#include <stdio.h>
#include <string.h>
char strcopy(char *from, char *to)
{
    char *ptr = to; //Assiging the base address to ptr pointer
    while (*from)
        *to++ = *from++;
    *to = '\0'; //because here to pointer will reach to the end of array

    printf("Size of to: %d\n", ((to - ptr) + 1));
    printf("Strlen: %d\n", strlen(ptr));
    printf("In called function\n%s\n", ptr); //That's why we are printing copied string using ptr pointer
    while (*ptr)
        printf("%c ", *(ptr++));
    printf("\n\v");
}

void main()
{
    char str1[] = "surya kant";
    int size = sizeof(str1);
    char str2[size];
    strcopy(str1, str2);
    printf("Size of str1: %d\n", size);
    printf("Strlen: %d\n", strlen(str1));
    printf("In main function\n%s\n", str2);
}