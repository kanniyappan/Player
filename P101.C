#include<stdio.h>
void main()
{
int r,d,b=0,i=1;
scanf("%d",&d);
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
i=i*10;
}
printf("%d",b);
}
