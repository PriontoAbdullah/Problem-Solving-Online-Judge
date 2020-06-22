#include<stdio.h>
main()
{
    float n,m,v;
    scanf("%f",&n);
    if(0.00<=n && n<=400.00)
    {
        v=n*0.15;
        m=n+v;
        printf("Novo salario: %.2f\n",m);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 15 %%\n");
    }
    else if(400.01<=n && n<=800.00)
            {
        v=n*0.12;
        m=n+v;
        printf("Novo salario: %.2f\n",m);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 12 %%\n");
    }
   else if(800.01<=n && n<=1200.00)
        {
        v=n*0.10;
        m=n+v;
        printf("Novo salario: %.2f\n",m);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 10 %%\n");
        }
    else if(1200.01<=n && n<=2000.00)
        {
        v=n*0.07;
        m=n+v;
        printf("Novo salario: %.2f\n",m);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 7 %%\n");
        }
    else if(n>2000.00)
        {
        v=n*0.04;
        m=n+v;
        printf("Novo salario: %.2f\n",m);
        printf("Reajuste ganho: %.2f\n",v);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
