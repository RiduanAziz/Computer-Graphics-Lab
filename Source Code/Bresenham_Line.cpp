#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,x1,y1,x2,y2,dx,dy,p,gd,gm;

    printf("Enter the value of x1 : ");
    scanf("%d",&x1);
    printf("Enter the value of y1 : ");
    scanf("%d",&y1);
    printf("Enter the value of x2 : ");
    scanf("%d",&x2);
    printf("Enter the value of y2 : ");
    scanf("%d",&y2);

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    x = x1;
    y = y1;

    p = 2*dy - dx;

    while(x <= x2)
    {
        putpixel(x,y,WHITE);

        if(p < 0)
        {
            x = x + 1;
            p = p + 2*dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + 2*dy - 2*dx;
        }
        delay(30);
    }
    getch();
    closegraph();
    return 0;
}
