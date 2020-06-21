#include<stdio.h>
int main()
{
        char s[100];
        int i,X=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='n')
            {
                X=X+1;
            }
        }
        printf("%d",X);

    return 0;
}

