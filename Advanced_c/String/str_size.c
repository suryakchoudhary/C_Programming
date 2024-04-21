#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";

    printf("Size of str1 = %d\n", sizeof(str1));

    while (str1[count] != '\0')
        count++;
    printf("Size of str1 is %d\n", count);

    printf("Size of str2 = %d\n", sizeof(str2));
    count = 0;
    while (str2[count] != '\0')
        count++;
    printf("Size of str2 is %d\n", count);
}