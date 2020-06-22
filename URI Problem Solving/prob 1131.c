#include<stdio.h>
int main()
{
    int x,y,n,i=0,g=0,e=0,f=0;
    while(1){
        scanf("%d%d",&x,&y);
        printf("Novo grenal (1-sim 2-nao)\n");
        f++;
        if(x>y) i++;
        else if(x<y) g++;
        else e++;
        scanf("%d",&n);
        if(n==2){
            break;
        }
    }
    printf("%d grenais\n",f);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",e);
    if(x>y)
    printf("Inter venceu mais\n");
    else if(x<y)
     printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
