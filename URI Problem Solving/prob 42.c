#include<stdio.h>
main()
{
int a,b,c,temp,aa,bb,cc;
scanf("%d%d%d",&aa,&bb,&cc);
a=aa;
b=bb;
c=cc;
if(a>b)
{
    temp=a;
    a=b;
    b=temp;
}
if(a>c)
{
    temp=a;
    a=c;
    c=temp;
}
if(b>c)
{
    temp=b;
    b=c;
    c=temp;
}
printf("%d\n%d\n%d\n",a,b,c);
printf("\n");
printf("%d\n%d\n%d\n",aa,bb,cc);
return 0;
}
