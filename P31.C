#include <stdio.h>
int main()
{
	int a[2],b[2],c[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&c[i]);
	}
	for(i=0;i<2;i++)
	{
	    if((a[i]==b[i])&&(b[i]==c[i])&& (a[i]==c[i]))
	    {
	        flag=1;
	    }
	
	if(flag==1)
	{
	    printf("yes");
	    break;
	}
}
if(flag==0)
printf("No");
	return 0;
}
