#include<stdio.h>
void main()
{
    int a,b,i,len=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    len=a;
    else
    len=b;
    for(i=len;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}
