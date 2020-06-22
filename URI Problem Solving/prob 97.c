#include<stdio.h>
int main()
{
    int i,j=7,m;
  for(i=1;i<=9;i+=2)
    {
    for(m=7;m>=5;m--)
    {
    printf("I=%d J=%d\n",i,j);
    j--;
    }
    j+=5;
  }
return 0;
}
