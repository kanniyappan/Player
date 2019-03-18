#include<stdio.h>    
void main()
    {  
    int a[20],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
     for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
        if(a[i]==a[j])
        c++;
        }
    }
    if(c==n)
    printf("yes");
    else
    printf("no");
    } 
