#include<stdio.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
        if(a<b){
        temp=b;
        b=a;
        a=temp; }
        if(a<c) {
        temp=c;
        c=a;
        a=temp; }
        if(b<c) {
        temp=c;
        c=b;
        b=temp;  }
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
      else {
      if(a*a==b*b+c*c)
         printf("TRIANGULO RETANGULO\n");
      if(a*a>b*b+c*c)
         printf("TRIANGULO OBTUSANGULO\n");
      if(a*a<b*b+c*c)
         printf("TRIANGULO ACUTANGULO\n");
      if(a==b && b==c)
         printf("TRIANGULO EQUILATERO\n");
        else if(a==b || a==c || b==c )
        printf("TRIANGULO ISOSCELES\n");
      }
return 0;
}
