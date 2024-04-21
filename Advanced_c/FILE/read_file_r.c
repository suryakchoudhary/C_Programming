#include <stdio.h>

void main()
{
    //Opening File...........................
    FILE *myfile = NULL;
    const char *filename = "Write.bin";
    myfile = fopen(filename, "r");
    if (myfile == NULL)
        perror("Unable to open file\n");
    else
        printf("File opened successfully\n");

    //Reading File............................
    char ch;
    while ((ch = fgetc(myfile)) != EOF)
        printf("%c", ch);
    printf("\n\v");

    // char data[20];
    // if (fgets(data, 20, myfile) == NULL)
    //     perror("Failed to read\n");
    // printf("%s", data);
    // printf("\n\n");

    //Close File..............................
    if (fclose(myfile) == 0)
        printf("File closed successfully\n");
    myfile = NULL;
}