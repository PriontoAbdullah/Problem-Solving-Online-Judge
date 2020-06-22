#include<stdio.h>
main()
{
    double N1,N2,N3,N4,A,L,av;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    N1=N1*2;
    N2=N2*3;
    N3=N3*4;
    N4=N4*1;
    A=(N1+N2+N3+N4)/10.0;
    printf("Media: %.1lf\n",A);
    if(A>=7.0)
        printf("Aluno aprovado.\n");
    else if(A<5.0)
        printf( "Aluno reprovado.\n");
    else
       {
        printf("Aluno em exame.\n");
        scanf("%lf",&L);
        printf("Nota do exame: %.1lf\n",L);
        av=(A+L)/2.0;

        if(av>=5.0)
        printf("Aluno aprovado.\n");
        else
        printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n",av);
       }
    return 0;
}
