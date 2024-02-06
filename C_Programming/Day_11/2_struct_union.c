/*Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. Initialize union/structures members and print.
*/

#include<stdio.h>
#include<string.h>
struct members1{
	int RollNumber1;
	char Name1[10];
};

union members2{              //One operation at a time
        int RollNumber2;
        char Name2[10];
};

int main()
{
	printf("This is using structure.\n");
	struct members1 mem1={1, "Rahul"};
	printf("Roll Number: %d\n", mem1.RollNumber1);
	printf("Name : %s\n", mem1.Name1);
	printf("The size of structure is: %ld\n", sizeof(struct members1));

printf("\n\n");

	printf("This is using union.\n");
        union members2 mem2; 
	mem2.RollNumber2 = 2;
        printf("Roll Number: %d\n", mem2.RollNumber2);
	strcpy(mem2.Name2, "Ram");
        printf("Name : %s\n", mem2.Name2);
        printf("The size of union is: %ld\n", sizeof(union members2));
        return 0;
}



