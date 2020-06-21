#include<stdio.h>
struct swe {
     int ban;
     int mat;
     int eng;
};
int main()
{ int i,avg[10],max=0,m,j,loc;
   struct swe student[10];
for(i=0;i<10;i++){
        printf("For Student %d:\n",i+1);
    scanf("%d%d%d",&student[i].ban,&student[i].eng,&student[i].mat);
}
for(i=0;i<10;i++){
    avg[i]=(student[i].ban+student[i].eng+student[i].mat)/3;
}

for(i=0;i<10;i++){
    printf("For Student %d Average is: %d\n",i+1,avg[i]);
}
for(j=0;j<10;j++){
if(avg[j]>max){
     max=avg[j];
     loc=j;
}
}
printf("The Largest number get student %d",loc);
return 0;
}
