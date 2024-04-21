#include <stdio.h>

void main()
{
    //Opening file.........................
    int Rename;
    FILE *myfile = NULL;
    const char *filename = "Write.bin";
    myfile = fopen(filename, "w+");//"wb" b indicates the file is opened in binary mode
    if (myfile == NULL)
        perror("Failed to open file\n");

    //Writing in file......................
    int put;
    const char *text = "Writing.... text in file\n.";
    put = fputs(text, myfile);
    if (put == -1) //or if(fputs(text, myfile)==EOF)
        perror("Failed to erite in file\n");
    else
        printf("Write successfil\n");

    //Renaming file........................
    // const char *newname = "WRITE.txt";
    // Rename = rename(filename, newname);
    // if (Rename == 0)
    //     printf("File renamed successfully\n");
    // else
    // {
    //     printf("Failed to rename\n");
    //     perror("Failed to rename\n");
    // }

    //Closing file..........................
    int close;
    close = fclose(myfile);
    myfile = NULL;
    if (close == 0)
        printf("File closed successfully\n");
    else if (close == -1)
        printf("Failed to close file\n");

    //Deleting file.........................
    //remove(newname);
}