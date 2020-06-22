#include<stdio.h>
int main()
{
    int i,big=0,pos,n;
    for(i=1;i<=100;i++){
        scanf("%d",&n);
        if(n>big){
            big=n;
            pos=i;
        }
    }
    printf("%d\n",big);
    printf("%d\n",pos);
    return 0;
}

