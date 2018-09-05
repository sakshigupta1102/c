#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void bcircle(int xc,int yc,int r)
{ int x,y,d;
  x=0;
  y=r;
  d=3-2*r;
  while(x<=y)
  { if(d>=0)
    { d+=4*(x-y)+10;
      y=y-1;
    }
    else
      d+=4*x+6;
    x++;
    putpixel(xc+x,yc+y,WHITE);
    delay(10);
    putpixel(xc+x,yc-y,RED);
    delay(10);
    putpixel(xc-x,yc+y,GREEN);
    delay(10);
    putpixel(xc-x,yc-y,YELLOW);
    delay(10);
    putpixel(xc+y,yc+x,BLUE);
    delay(10);
    putpixel(xc+y,yc-x,GREEN);
    delay(10);
    putpixel(xc-y,yc+x,YELLOW);
    delay(10);
    putpixel(xc-y,yc-x,RED);
    delay(10);
  }
}

void main()
{ int gd=DETECT,gm,xc,yc,r;
initgraph(&gd,&gm,"");
printf("Enter the xcentre,ycenter and radius: ");
scanf("%d%d%d",&xc,&yc,&r);
bcircle(xc,yc,r);
getch();
closegraph();
}