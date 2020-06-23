 #include<stdio.h>
#include <graphics.h>
#define d 42
#define s 33
#define f 190
#define mx getmaxx()
#define my getmaxy()

 main()
{
    char grid[3][3];
    int gd = DETECT;
    int gm,sx=0,sy=0;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    int j,i;
    for(i=0; i<3; i++)                          //Initialize grid with blank spaces
        for(j=0; j<3; j++)
            grid[i][j]=' ';


    char str[2];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==sx&&i==sy)                            //If the cell is selected cell
                setcolor(RED);
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

