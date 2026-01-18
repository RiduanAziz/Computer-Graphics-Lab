#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT, gm;
    int x1, y1, x2, y2;
    int xmin, ymin, xmax, ymax;
    int xx1, yy1, xx2, yy2;
    int dx, dy, i;
    int p[4], q[4];
    float t[4], t1, t2;

    printf("Enter lower coordinates of window: ");
    scanf("%d %d", &xmin, &ymin);
    printf("Enter upper coordinates of window: ");
    scanf("%d %d", &xmax, &ymax);
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    initgraph(&gd,&gm," ");

    setcolor(RED);
    rectangle(xmin, ymin, xmax, ymax);
    line(x1, y1, x2, y2);

    dx = x2 - x1;
    dy = y2 - y1;

    p[0] = -dx; q[0] = x1 - xmin;
    p[1] =  dx; q[1] = xmax - x1;
    p[2] = -dy; q[2] = y1 - ymin;
    p[3] =  dy; q[3] = ymax - y1;

    for(i = 0; i < 4; i++)
    {
        if(p[i] != 0)
            t[i] = (float)q[i] / p[i];
        else if(p[i] == 0 && q[i] < 0)
        {
            printf("Line completely outside the window\n");
            getch();
            closegraph();
            return 0;
        }
        else
            t[i] = (i < 2) ? 0.0 : 1.0; // partially inside
    }

    t1 = (t[0] > t[2]) ? t[0] : t[2];
    t2 = (t[1] < t[3]) ? t[1] : t[3];

    if(t1 < t2)
    {
        xx1 = x1 + t1*dx;
        yy1 = y1 + t1*dy;
        xx2 = x1 + t2*dx;
        yy2 = y1 + t2*dy;
        printf("Line after clipping drawn in WHITE\n");
        setcolor(WHITE);
        line(xx1, yy1, xx2, yy2);
    }
    else
    {
        printf("Line lies completely outside the window\n");
    }

    getch();
    closegraph();
    return 0;
}
