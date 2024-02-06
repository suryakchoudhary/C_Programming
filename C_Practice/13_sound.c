#include<stdio.h>
//#include<conio.h>
#include<sound.h>

int main()
{
	int s;

	while(1)
	{
		scanf("%c", &s);
		sound(s);
		textcolor(s);
		printf("Key = %d\n", s);
		if(s==8)
		{
			break;
		}
		nosound();
	}
}
