#include <stdio.h>
void main() 
{
	char s[30];
	int i,n,c;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='1' && s[i]<='9') || (s[i]>='A' && s[i]<='F'))
			c=1;
		else
	    {
			c=0;
			break;
		}
	}
	if(c==0)
		printf("no");
	else
		printf("yes");
}
