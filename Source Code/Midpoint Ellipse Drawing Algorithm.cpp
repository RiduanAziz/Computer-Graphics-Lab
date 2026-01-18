#include <graphics.h>
#include <stdio.h>

int main()
{
    int xc,yc;
    int rx,ry;
    int x,y;
    long p1,p2;
    int gd,gm;

    printf("Enter center xc : ");
    scanf("%d",&xc);
    printf("Enter center yc : ");
    scanf("%d",&yc);
    printf("Enter x-radius rx : ");
    scanf("%d",&rx);
    printf("Enter y-radius ry : ");
    scanf("%d",&ry);

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    x = 0;
    y = ry;

    p1 = ry*ry - rx*rx*ry + (rx*rx)/4;

    while(2*ry*ry*x <= 2*rx*rx*y)
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);

        if(p1 < 0)
        {
            p1 = p1 + 2*ry*ry*x + ry*ry;
        }
        else
        {
            p1 = p1 + 2*ry*ry*x - 2*rx*rx*y + ry*ry;
            y = y - 1;
        }
        x = x + 1;
        delay(20);
    }

    p2 = ry*ry*(x+0.5)*(x+0.5) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;

    while(y >= 0)
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);

        if(p2 > 0)
        {
            p2 = p2 - 2*rx*rx*y + rx*rx;
        }
        else
        {
            p2 = p2 + 2*ry*ry*x - 2*rx*rx*y + rx*rx;
            x = x + 1;
        }
        y = y - 1;
        delay(20);
    }

    getch();
    closegraph();
    return 0;
}
