#include<stdio.h>
void main()
{
    int i,n,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        c++;
    }
    printf("%d",c);
}
