#include<stdio.h>
int main()
{ int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{   if (a>c)
        printf("%d eh o maior\n",a);
    else
        printf("%d eh o maior\n",c);
    }
 else
        { if (c>b)
        printf("%d eh o maior\n",c);
   else
        printf("%d eh o maior\n",b);
        }
   return 0;
}
