#include<stdio.h>






main()
{
    long int n,a[100000],i,j=0,sum=0,b[100000];
    scanf("%ld",&n);
    if(n>=1 && n<=100000)
    {
        for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
       
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            b[j]=sum;
            j++;
        }
        for(i=j-1;i>=0;i--)
        printf("%ld ",b[i]);
       }
   
}
