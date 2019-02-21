#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n+1;i++)
	{
	    for(j=0;j<=n+1;j++)
	    {
	        if(a[i][j]==1)
	        {
	            if(a[i-1][j]==0 && a[i][j-1]==0 && a[i][j+1]==0 && a[i+1][j]==0)
	            {
	                c=c+1;
	            }
	        }
	    }
	}
printf("%d",c);
}
