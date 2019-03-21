#include<stdio.h>
void main()
{
int n,a[20],i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        for(k=i+2;k<n;k++)
        {
            if(a[i]+a[j]==a[k])
            {
            printf("%d %d %d\n",a[i],a[j],a[k]);
            break;
            }
        }
    }
}
}
