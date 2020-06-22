#include<stdio.h>
int main()
{
    float n,i;
    scanf("%f",&n);
    if(0.00<=n && n<=2000.00)
        printf("Isento\n");
    else if(2000.01<=n && n<=3000.00)
    {
        i=(n-2000.00)*0.08;
        printf("R$ %.2f\n",i);
    }
    else if(3000.01<=n && n<=4500.00)
    {
        i=(n-3000.00)*0.18;
        printf("R$ %.2f\n",i+80);
    }
    else
    {
        i=(n-4500.00)*0.28;
        printf("R$ %.2f\n",i+350);
    }

    return 0;
}

