#include<stdio.h>
void main()
{
    char a[30];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97)
        a[i]=a[i]-32;
        else if(a[i]>=65)
        a[i]=a[i]+32;
    }
    for(i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
}
