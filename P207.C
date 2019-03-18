#include <stdio.h>
void main() 
{
      int a[30],i,small,large,r,n;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      large=a[0];
      for(i=0;i<n;i++)
      {
      if(a[i]>large)
      large=a[i];
      }
      small=a[1];
      for(i=0;i<n;i++)
      {
      if(a[i]<small)
      small=a[i];
      }
      r=large-small;
      printf("%d",r);
}
