#include <stdio.h>
void main() 
{
	int n,a[30],i,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i=i+2)
	{
		if(a[i]<a[i+1])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("no");
	if(flag==1)
		printf("yes");
}
