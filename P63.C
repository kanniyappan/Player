#include<stdio.h>
void main()
{
    char a[20],c=0;
    int i;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    c++;
    printf("%d",c);
}
