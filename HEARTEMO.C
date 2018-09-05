#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{ int griver=DETECT,gmode,x,y;
initgraph(&griver,&gmode,"");
x=getmaxx()/2;
y=getmaxy()/2;

arc(x,y,45,230,70);
arc(x+100,y,-50,135,70);
line(x-44,y+55,x+50,y+130);
line(x+143,y+55,x+50,y+130);
//arrow line
line(x-60,y+100,x+50,y+20); //initial
line(x+150,y-50,x+200,y-85); //final
//arrow pointer line
line(x+190,y-85,x+200,y-85);
line(x+197,y-75,x+200,y-85);
getch();
closegraph();
}