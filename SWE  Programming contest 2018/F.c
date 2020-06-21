#include<stdio.h>
int main()
{
    int T,r=0,c=0,t=0;
    scanf("%d",&T);
    while(T--)
    {
        int N,M;
        scanf("%d %d",&N,&M);

        int k,l;
        char s[N][M];
        for(k=0;k<=N;k++)
        {
            for(l=0;l<M;l++)
            {
                scanf("%c",&s[k][l]);
                if(s[k][l]=='#')
                {
                    t=t+1;
                }
            }
        }
      int i,j=0;
        for(i=0;i<N;i++)
        {
           if(s[2][i]=='#'){
                c=c+1;
            }
        }
        for(j=0;j<M;j++){
        if(s[j][1]=='#')
        {
            r=r+1;
        }
        }

        printf("%d %d %d",r,c,t);
        if(r==c)
        {
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }
    r=0;
    c=0;
    return 0;
}

