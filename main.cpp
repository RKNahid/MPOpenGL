#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 200;
    int y = 200;
    int direction = 1;

    while (TRUE)
    {
        cleardevice();

        setcolor(WHITE);
        circle(x, y-100, 20);

        setcolor(WHITE);
        rectangle(x - 20, y-80, x + 20, y);

        setlinestyle(SOLID_LINE, 0, 3);
        setcolor(WHITE);
        line(x - 60, y-100, x-20, y-65);
        line(x + 60, y-100, x+20, y-65);
        circle(x-63,y-105,8);
        circle(x+63,y-105,8);


        setlinestyle(SOLID_LINE, 0, 3);
        setcolor(WHITE);
        line(x - 10, y, x-25, y+80);
        line(x + 10, y, x+25, y+80);
        circle(x-24,y+88,8);
        circle(x+24,y+88,8);

        delay(100);
        x+=20*direction;

        if (kbhit())
        {
            char key = getch();


            switch (key)
            {
                case 75:
                    direction = -1;
                    break;
                case 77:
                    direction = 1;
                    break;
            }
        }

        if (x > getmaxx())
            x = -40;
        else if (x < -40)
            x = getmaxx();
    }

    closegraph();
    return 0;
}
