#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#define newline '\n'

 void Screen();

 int main()
  {
      int press;
      int menuchoice;

    mainmenu:
     printf("%c",newline);
     printf("%c",newline);
     printf("         >>>>>>> BRIKS GAME >>>>>>");
     printf("%c",newline);
     printf("%c",newline);
     printf("%c",newline);
     printf("         1. Play Game");
     printf("%c",newline);
     printf("         2. How to play");
     printf("%c",newline);
     printf("         3. Exit");
     printf("%c",newline);
     printf("%c",newline);
     printf("%c",newline);
     printf("         Enter your choice: (1/2/3):");
     scanf("%d",&menuchoice);
     printf("%c",newline);


    if(menuchoice==1)
    {
        Screen();
    }

    if(menuchoice==2)
    {
        system("CLS");
        printf("%c",newline);
        printf("%c",newline);
        printf("1.   You can see some bricks at the top of play board & a straight line at the end of board which you can move right or left.");
        printf("%c",newline);
        printf("%c",newline);
        printf("2.   There also a move able ball which move over the play board.");
        printf("%c",newline);
        printf("%c",newline);
        printf("3.   when the ball move down,you should touch it.If you miss the ball  you will lose the game. ");
        printf("%c",newline);
        printf("%c",newline);
        printf("4.   when you touch the ball it move up and break bricks. As a result you get points.");
        printf("%c",newline);
        printf("%c",newline);
        printf("5.   To move the straight line right you use (6) and left use (4) ");
        printf("%c",newline);
        printf("%c",newline);
        printf("%c",newline);

        // go to menu
        printf("GO BACK MAINMANU (PRESS: 5): ");
        scanf("%d",&press);
        printf("%c",newline);

        if(press==5)
        {
            system("CLS");
            goto mainmenu;
        }
    }


    if(menuchoice==3)
    {
        system("CLS");
        printf("%c",newline);
        printf("%c",newline);
        printf("     >>Thank you & Goodbye<<");
        printf("%c",newline);
        getch();
    }
   return 0;
}



/* (function for MENUCHOICE ==1) */

    void Screen()
    {
        int gd=DETECT,gm,i=80,k=140,j=390,c=0,x=0,y=0;
initgraph(&gd,&gm,"C\\TC\\BGI");
int xa=300,ya=372,r=8;


 while(1)
    {
        xa=xa+5;
        ya=ya+5;
        setcolor(RED);
setfillstyle(1,11);
rectangle(2,2,650,410);
floodfill(3,3,RED);

//first brick

setcolor(3);
setfillstyle(5,7);
rectangle(100,120,150,140);
floodfill(101,121,3);
rectangle(205,120,250,140);
floodfill(206,121,3);
rectangle(305,120,350,140);
floodfill(306,121,3);
rectangle(405,120,450,140);
floodfill(406,121,3);
rectangle(505,120,550,140);
floodfill(506,121,3);

//2rd line brick
setcolor(3);
setfillstyle(5,7);
rectangle(155,145,200,165);
floodfill(156,146,3);
rectangle(255,145,300,165);
floodfill(256,146,3);
rectangle(355,145,400,165);
floodfill(356,146,3);
rectangle(455,145,500,165);
floodfill(456,146,3);


//3rd brick
setcolor(3);
setfillstyle(5,7);
rectangle(100,170,150,190);
floodfill(101,171,3);
rectangle(205,170,250,190);
floodfill(206,171,3);
rectangle(305,170,350,190);
floodfill(306,171,3);
rectangle(405,170,450,190);
floodfill(406,171,3);
rectangle(505,170,550,190);
floodfill(506,171,3);


//fourth brick
setcolor(3);
rectangle(155,195,200,215);
floodfill(156,196,3);
rectangle(255,195,300,215);
floodfill(256,196,3);
rectangle(355,195,400,215);
floodfill(356,196,3);
rectangle(455,195,500,215);
floodfill(456,196,3);


//boat

if(xa>=640)
{
    xa=-xa;
}
if(ya>=410)
{
    ya=-ya;
}

setcolor(RED);
setfillstyle(9,YELLOW);
circle(abs(xa),abs(ya),abs(r));
floodfill(abs(xa),abs(ya),RED);
delay(10);
cleardevice();





setcolor(1);
floodfill(300,372,RED);
setcolor(7);
setfillstyle(9,2);
rectangle(i,j,k,399);
floodfill(i+1,j+1,7);
        setcolor(10);
        outtextxy(20,20,"press 'q' to quit");
        outtextxy(270,20,"BRICK GAME");
        outtextxy(550,20,"JAMAN");
        if(kbhit())
        {
            c=getch();
            if(c==72)
            {
                x=0;
                y=-1;
            }
            if(c==75)
            {
              x=-1;
              y=0;
            }
            if(c==77)
            {
                x=1;
                y=0;
            }
            if(c==80)
            {
                x=0;
                y=1;
            }
            if(c==113)
                exit(1);

        }


        i=i+x;
        k=k+x;
        delay(10);
        cleardevice();


    }


line(80,400,560,400);

getch();
closegraph();

    }

