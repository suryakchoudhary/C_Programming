#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char name[50];
	int i;
	printf("Enter: ");
	gets(name);
//	scanf("%s", name);
	for(i = 0; name[i] != '\0'; i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z')
			name[i] = name[i] - 32;

		else if(name[i] >= 'A' && name[i] <= 'Z')
			name[i] = name[i] + 32;

	//	else if(name[i] == 32)
	//		name[i]=name [i];

	}
			printf("%s",name);
	printf("\n");
	return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("\nString in Upper Case = %s", s);
   return 0;
}*/
