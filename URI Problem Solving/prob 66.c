#include<stdio.h>
main()
{
    int n,i,arr[5],evv=0,odd=0,pos=0,neg=0;
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
        evv++;
    else
        odd++;
    if(arr[i]>0)
        pos++;
     else if(arr[i]<0)
        neg++;
   }
   printf("%d valor(es) par(es)\n",evv);
   printf("%d valor(es) impar(es)\n",odd);
   printf("%d valor(es) positivo(s)\n",pos);
   printf("%d valor(es) negativo(s)\n",neg);
}
