#include <stdio.h>
int main()
{
	int num[5] = {21,18,57,45,50};
	int i;
	int *iptr=num;
	for(i=0;i<5;i++)
	{
		printf("\n Integer Array Element num[%d] : %d  addr: %p\n",i,*iptr,iptr);
		iptr++;
	}
	return 0;
}

