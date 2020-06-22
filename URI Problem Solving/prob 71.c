#include<stdio.h>
main()
{
    int a,b,sum,temp,i;
    sum=0;
    scanf("%d%d",&a,&b);
    if(b>a){
        temp=b;
        b=a;
        a=temp;
    }
    for(i=b+1;i<a;i++){
    if(i%2!=0)
    sum=sum+i;
    }
     printf("%d\n",sum);
    return 0;
}
