#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "GET";
    char str2[] = " well";
    char str3[] = " SOON";
    char str4[] = " SOONER";
    char result[20];
    char test[] = "hello";
    char t[] = "hello";

    //strlen()
    printf("Length of str1 = %d\n", strlen(str1));

    //sizeof()
    printf("Size of str1 = %d\n", sizeof(str1));

    //strcat()
    printf("Concatintation = %s\n", strcat(str1, str2));
    //strncat()
    printf("Concatintation = %s\n", strncat(str2, str3, 2));

    //strcpy()
    strcpy(result, str3);
    printf("%s is copied to result[20]\n", result);
    //strncpy(result, str1, 2);
    printf("%s is the two char of str1 copied to result[20]\n", strncpy(result, test, 2));

    //strcmp()
    //printf("%d\n", strcmp(test, t));
    (strcmp(test, t) == 0) ? printf("Both strings are equal\n") : printf("Strings ar enot equal\n");
    //strncmp()
    //printf("%d\n", strncmp(str3, str4, 3));
    (strncpy(str3, str4, 3)) ? printf("Some part of both the strings are equal\n") : printf("Strings ar enot equal\n");
}