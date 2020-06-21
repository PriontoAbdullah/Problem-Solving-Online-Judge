#include<stdio.h>
int main()
{
    int a,b,c,f,s,t,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&a,&b,&c);
    if(a<b){
            if(a<c) {
                    f=a;
                    if(b<c){
                         s=b;   t=c;
                                }
                    else if(b>c) {
                         s=c;   t=b;
                                        }
                    }
            else if(a>c){
                        f=c;     s=a;     t=b;
                               }
           }
   else if(a>b){
            if(a<c){
                f=b;   s=a;   t=c;
                       }
            else if(a>c){
                t=a;
                     if(b<c){
                        f=b;   s=c;
                                }
                     else if(b>c){
                        f=c;   s=b;
                                        }
                }
      }
        printf("Case %d: %d %d %d\n",i,f,s,t);
    }
   return 0;
}
