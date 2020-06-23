 #include<stdio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGi");
    int i,j;
    char str[2];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==sx&&i==sy)                            //If the cell is selected cell
                setcolor(GREEN);
            else
                setcolor(WHITE);                        //For non-selected cell
            rectangle(j*d+f,i*d+f,j*d+s+f,i*d+s+f);
            sprintf(str,"%c",grid[i][j]);               //To print Player's symbol in cell
            outtextxy(j*d+8+f,i*d+8+f,str);
        }
    }

    getch();
    closegraph();
    return 0;
}

