#include <stdio.h>
#include <string.h>

void main()
{
    char text[] = "Surya Kant Choudhary";
    char *ptr = text;

    for (int i = 0; i < strlen(text); i++)
    {
        printf("text[%d] = %c\t*(ptr+%d) = %c\t&text[i] = %p\t(ptr+i) = %p\n", i, text[i], i, *(ptr + i), &text[i], (ptr + i));
    }
}