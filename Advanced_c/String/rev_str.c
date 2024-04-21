#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int len = 0, actuallen = 0, j, i;
    printf("Enter the string\n");
    scanf("%s", string);

    actuallen = strlen(string);
    len = actuallen - 1;
    char cpy[actuallen];

    for (i = len, j = 0; i != -1; i--, j++)
    {
        cpy[j] = string[i];
    }
    j++;
    cpy[j] = '\0';
    for (int l = 0; cpy[l] != '\0'; l++)
        printf("%c", cpy[l]);
    return 0;
}