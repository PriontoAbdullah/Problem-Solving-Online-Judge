#include<stdio.h>
main()
{
    float a,b,c,A;
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
       A=((a+b)*c)/2.0;
    printf("Area = %.1f\n",A);
    }
return 0;
}
