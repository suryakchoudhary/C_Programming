//Convert the characters from upper case to lower case without using function
//char lower = tolower('A');

#include <stdio.h>
#include <string.h>

void main()
{
    char strng[20];
    char lower[20];
    printf("Enter string to convert to lower case: ");
    scanf("%[^\n]", strng);
    printf("%d\n", strlen(strng));
    for (int i = 0; (i < strlen(strng) && i < sizeof(strng)); i++)
    {
        if ('A' <= strng[i] && strng[i] <= 'Z')
        {
            lower[i] = strng[i] + 32;
        }
        else
            lower[i] = strng[i];
    }
    printf("%s\n", lower);
}