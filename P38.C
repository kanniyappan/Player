#include <stdio.h>
main() 
{
	char s[20];
	int i,n;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			 printf("%c",s[i]);
	    }
	}
}
