#include<stdio.h>
main()
{
    char a[30];
    int i,c=0,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    scanf("%c",&a[i]);
    }
    for(i=n;i>=0;i--)
    {
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
    {
    printf("%c",a[i]);
    }
    }
}
