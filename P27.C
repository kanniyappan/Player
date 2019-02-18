#include <stdio.h>
main() 
{
	int l,r,len,i;
	scanf("%d %d",&l,&r);
	if (l>r)
	{
	    if(l%r==0)
	    printf("%d",l);
	    else
	    printf("%d",l*r);
	}
	else
	{
	 if(r%l==0)
	   printf("%d",l);
    else
	printf("%d",l*r);
	}
}
