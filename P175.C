#include<stdio.h>

main()
{
    int a[100],i,n,k,f=0,c;

    
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   
    c=a[0];
    for(i=0;i<n;i++)
    {
    
         if((a[i]>c)&&(a[i]>k))
         {
             printf("%d",a[i]);
             break;
         }
         else
           c=a[i];
         
    }
    

}
