#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main()
{ int gd=DETECT,gm;
  int i,length,x,y,x1,y1;
  float xinc,yinc;
  initgraph(&gd,&gm,"");
  printf("Enter initial cordinates of x and y=");
  scanf("%d%d",&x,&y);
  printf("Enter final cordinates of x and y=");
  scanf("%d%d",&x1,&y1);
  length=((x1-x)>(y1-y)?x1-x:y1-y);
  xinc=(x1-x)/length;
  yinc=(y1-y)/length;
  x=x+0.5;
  y=y+0.5;
  putpixel(x,y,WHITE);
  for(i=1;i<=length;i++)
	{ x+=xinc;
	y+=yinc;
	//putpixel(x,y,WHITE);
	printf("(%d,%d)",x,y);
	}
getch();
closegraph();
}