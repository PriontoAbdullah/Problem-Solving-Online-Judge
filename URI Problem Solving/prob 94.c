#include<stdio.h>
int main()
{   char ch,c;
    int m,n,i,sr=0,sc=0,ss=0,T;
    float dc,dr,ds;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d%c%c",&n,&c,&ch);
        if(ch=='C'){
            sc=sc+n;
        }
        if(ch=='R'){
            sr=sr+n;
        }
        if(ch=='S'){
            ss=ss+n;
        }
    }
    T=sc+sr+ss;
    dc=(sc*100.00)/T;
    dr=(sr*100.00)/T;
    ds=(ss*100.00)/T;
    printf("Total: %d cobaias\n",T);
    printf("Total de coelhos: %d\n",sc);
    printf("Total de ratos: %d\n",sr);
    printf("Total de sapos: %d\n",ss);
    printf("Percentual de coelhos: %.2f %%\n",dc);
    printf("Percentual de ratos: %.2f %%\n",dr);
    printf("Percentual de sapos: %.2f %%\n",ds);
    return 0;
}
