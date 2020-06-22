#include<stdio.h>
int main()
{
  int ara[]={10,20,30,40,50,60,70,80,90,100};
  int i,j,temp;
   for(j=9;j>=0;j--)
   {for(i=0;i<0;i++)

    {
        temp=ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
    } }
    for(i=9;i>=0;i--)
        printf("%d\n",ara[i]);
    return 0;
}
