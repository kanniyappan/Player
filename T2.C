#include<stdio.h>
void main()
{
    int num,n,m,a[30],i,j,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m+n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    num=a[0];
    for(i=0;i<m+n-1;i++)
    {
        for(j=i+1;j<m+n-1;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
            }
        }
    }
    for(i=0;i<m+n-2;i++)
    {
        sum=sum+a[i+1];
    }
     
    if(sum==num)
    printf("yes");
    else
    printf("No");
}
