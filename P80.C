#include<stdio.h>
void main()
{
char a[100],b[100]="Answer";
int i,n;
scanf("%s",&a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i+1]=='\0')
{
printf("%c ",a[i]);
printf("%s",b);
}
}
}
