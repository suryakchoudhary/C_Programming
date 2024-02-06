#include<stdio.h>
int ma();
int mai();
void main()
{
	int a=10;
	char ch='A';
	int *ptr_b;
	char  *ptr_c;
	ptr_b = &a;
	ptr_c = &ch;

	printf (" %d \n",sizeof(a) );
	printf (" %d \n",sizeof(ch) );
	printf (" %d , %d , %d \n",a,*ptr_b,sizeof(ptr_b) );
	printf (" %c , %c , %d \n",ch,*ptr_c,sizeof(ptr_c) );
	ma();
	mai();
}
int ma( )
{
	int U = 3, v;
	int *pu;    /* pointer t o an integer */
	int *pv;    /* pointer t o an integer */
	pu = &U; /* assign address of U t o pu */
	v = *pu;  /* assign value of U t o v */
	pv = &v; /* assign address of v t o pv */
	printf("\nu=%d &u=%p pu=%p *pu=%d", U, &U, pu, *pu);
	printf("\n\nv=%d &v=%p pv=%p *pv=%d", v, &v, pv, *pv);
	return 0;
}

int mai()
{
	int a[10], i;
	int *ptr;
	ptr=&i;
	printf("%d\n", sizeof(ptr));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(void *));
	printf("%d\n", sizeof(a));
}

