#include <stdio.h>
main() 
{
	char s[50];
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		s[i]=s[i]+3;
		if(s[i]=='X')
		s[i]='A';
		if(s[i]=='Y')
		s[i]='B';
		if(s[i]=='Z')
		s[i]='C';
	}
	printf("%s",s);
}
