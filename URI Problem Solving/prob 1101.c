#include<stdio.h>
int main()
{
    int sum,i,m,n,temp;
    scanf("%d%d",&m,&n);
    while(m>0 && n>0){
            sum=0;
        if(m>n){
            temp=m;
            m=n;
            n=temp;
        }
        for(i=m;i<=n;i++){
            printf("%d ",i );
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
      scanf("%d%d",&m,&n);
    }
    return 0;
}
