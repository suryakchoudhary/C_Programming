#include<stdio.h>
int main()
{
	int i, n, num[10];

	printf("Enter num\n");
	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%d", &num[i]);

	for(i=n-1; i>=0; i--)
		printf("%d\t", num[i]);

}

/*







#include<stdio.h>
int main()
{
	int x, y, rev=0;
	printf("Enter a number\n");
	scanf("%d", &x);
	y=x;

	while(x!=0)
	{
		rev = rev * 10;
		rev = rev + x%10;
		x = x/10;
	}
	printf("Reverse of %d is %d\n",y, rev);
}
*/
