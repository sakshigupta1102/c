#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void bresenham(int x1,int y1,int x2,int y2)
{ int x,y,p,dx,dy;
 x=x1;
 y=y1;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 p=2*dy-dx;
// printf("The points of bresenham line are=\n");
 while(x<=x2)
 { delay(200);
 if(p>=0)
    {putpixel(x,y,15);
     // printf("(%d,%d),",x,y);
      y++;
      p+=(2*dy-2*dx);
    }
   else
   { putpixel(x,y,15);
    // printf("(%d,%d),",x,y);
     p+=2*dy;
   }

 x++;
 }
}

void main()
{ int gd=DETECT,gm;
initgraph(&gd,&gm,"");
bresenham(100,100,230,218);

getch();
closegraph();
}