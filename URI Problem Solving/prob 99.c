#include<stdio.h>
int main()
{
    int m,n,t,sum,temp,i;
    scanf("%d",&t);
    while(t--){
            sum=0;
        scanf("%d%d",&m,&n);
        if(m>n){
            temp=m;
            m=n;
            n=temp;
        }
           if(m%2==0){
            m=m+1;}
         else
            {
                m=m+2;
            }
        for(i=m;i<n;i+=2){
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
