#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr,i,n1,n2;
	printf("Enter size of array: ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("Address of previously allocated memory: \n");
	for(i=0;i<n1;++i)
		printf("%u\t",ptr+i);
	printf("\nEnter elements of array: \n");
	for(i=0;i<n1;++i)
	{
		scanf("%d",ptr+i);
	}  
	for(i=0;i<n1;++i)
	{
		printf("%d \t",*(ptr+i));
	}
	printf("\nEnter new size of array: \n");
	scanf("%d",&n2);
	ptr=(int*)realloc(ptr, n2);
	for(i=0;i<n2;++i)
		printf("%u\t",ptr+i);
	for(i=0;i<n2;++i)
	{
		printf("%d \t",*(ptr+i));
	}
	free(ptr);
	return 0;

}

