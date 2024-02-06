
#include<stdio.h>
#include<string.h>
union members2{
        int RollNumber2;
        char Name2[10];
};

int main()
{
        
	union members2 mem2;                // = {2, "Amit"}; since in union one operation takes place at a time.
        mem2.RollNumber2 = 2;
        printf("Roll Number: %d\n", mem2.RollNumber2);
	strcpy(mem2.Name2, "Ram");
        printf("Name : %s\n", mem2.Name2);
        printf("The size of union is: %ld\n", sizeof(union members2));
        return 0;
}

