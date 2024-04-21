#include <stdio.h>
#include <string.h>
int strlen1(char len[])
{
    int i = 0;
    while (len[i] != '\0')
        i++;
    printf("fun: %d\n", strlen(len));
    return i;
}

char merge(char merger[], char len1[], char len[])
{
    int i = 0, j = 0;
    while (len1[i] != '\0')
    {
        merger[i] = len1[i];
        i++;
    }

    while (len[j] != '\0')
    {
        merger[i] = len[j];
        i++;
        j++;
    }
    merger[i] = '\0';
}

int main()
{
    char len[] = " Surya Kant Choudhary";
    char len1[] = "My name is";
    char result[50];
    int length, i = 0;

    length = strlen1(len);
    printf("String length = %d\n", length);

    merge(result, len1, len);
    printf("%s\n", result);
}