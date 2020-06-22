#include<stdio.h>
main()
{
    int em_num,work_hr,num;
    float amount_perhour,sal;
    scanf("%d%d",&em_num,&work_hr);
    scanf("%f",&amount_perhour);
    num = em_num;
    sal = work_hr*amount_perhour;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",sal);
    return 0;

}
