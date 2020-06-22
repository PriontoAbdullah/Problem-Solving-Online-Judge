#include<stdio.h>
main()
{
    double a,b,c,pi,tr,cr,sr,rt,tp;
    pi = 3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    tr=0.5*a*c;
    cr=pi*(c*c);
    tp=((a+b)/2)*c;
    sr=b*b;
    rt=a*b;
    printf("TRIANGULO: %.3lf\n",tr);
    printf("CIRCULO: %.3lf\n",cr);
    printf("TRAPEZIO: %.3lf\n",tp);
    printf("QUADRADO: %.3lf\n",sr);
    printf("RETANGULO: %.3lf\n",rt);
    return 0;
}
