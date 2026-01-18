#include <graphics.h>
#include <stdio.h>

int main()
{
    int xc,yc,r;
    int x,y,p;
    int gd,gm;

    printf("Enter center xc : ");
    scanf("%d",&xc);
    printf("Enter center yc : ");
    scanf("%d",&yc);
    printf("Enter radius r : ");
    scanf("%d",&r);

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    x = 0;
    y = r;
    p = 1 - r;

    while(x <= y)
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);

        putpixel(xc+y,yc+x,WHITE);
        putpixel(xc-y,yc+x,WHITE);
        putpixel(xc+y,yc-x,WHITE);
        putpixel(xc-y,yc-x,WHITE);

        if(p < 0)
        {
            p = p + 2*x + 3;
        }
        else
        {
            p = p + 2*(x - y) + 5;
            y = y - 1;
        }

        x = x + 1;
        delay(30);
    }

    getch();
    closegraph();
    return 0;
}
