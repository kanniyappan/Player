#include <stdio.h>
main() 
{
	char s[20];
	int i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			s[i]='$';
			break;
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			s[i]='+';
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]=='$')
	{
		s[i]=' ';
	}
	if(s[i]!='+')
	{
	printf("%c",s[i]);
	}
	}
}
