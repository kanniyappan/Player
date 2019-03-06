#include<stdio.h>
void main()
{
    int i,j,x,n,a[20],c=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            c=1;
        }
    }
    if(c==1)
    printf("Yes");
    else
    printf("No");
}
