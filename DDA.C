#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void dda(float x1,float y1,float x2,float y2)
{ float x,y,xi,yi;
int xp,yp;
 float len,dx,dy;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 len=(dx>=dy)?dx:dy;
 xi=dx/len;
 yi=dy/len;
 x=x1;
 y=y1;

// printf("\nThe intermediate points of DDA line =\n");d
// printf("\n(%d,%d)",x,y);
 putpixel(x,y,WHITE);

 while(x<len)
 { x+=xi;
   y+=yi;
  //printf(",(%f,%f)",x,y);
 // xp=x+0.5;
 // yp=y+0.5;
  //xp=(int)xp;
  //yp=(int)yp;
 // printf(",(%d,%d)",xp,yp);
   putpixel(x,y,WHITE);
   delay(50);
 }

}

void main()
{ int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 dda(100,120,280,240);
 getch();
closegraph();
}