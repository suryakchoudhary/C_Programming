#include <stdio.h>
//enable pragma for packing
#pragma pack(1) //memory is word accessible, 1 means we have assigned 1 word=1byte.
struct var
{
    char a;
    char b;
    char c;
    char d;
    char e;
    int num;
    //char b;
} v;
void main()
{
    printf("Size: %d\n", sizeof(struct var));
    printf("Size: %d\n", sizeof(v));
}