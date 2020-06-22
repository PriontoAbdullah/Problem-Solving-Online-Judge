#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,d,R1,R2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b-4*a*c);
    R1=((-b)+(sqrt(d)))/(2*a);
    R2=((-b)-(sqrt(d)))/(2*a);
    if (a==0.0 || d<0)
       { printf("Impossivel calcular\n"); }
    else {
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    }
    return 0;
}
