#include <graphics.h>
#include <stdlib.h>

int random (int N) {
    return rand() % N;
}

int main() {
    initwindow(500, 500);
    cleardevice();

    int x, y, R, G, B, code, i = 1;


    // Firework launch
    for (int j = 400; j > 100; j--)
    {
        setcolor(5);
        circle(250,j,10);
        setfillstyle(5, 5);
        floodfill(250, j, 5);
        delay(2);
        cleardevice();
    }


    // Explotion
    setcolor(RED);
    circle(250, 100, 10);
    setfillstyle(1, RED);
    floodfill(250, 400, RED);
    delay(70);
    cleardevice();

    setcolor(WHITE);
    circle(250, 100, 15);
    setfillstyle(1, WHITE);
    floodfill(250, 400, WHITE);
    delay(70);
    cleardevice();

    setcolor(YELLOW);
    circle(250, 100, 20);
    setfillstyle(1, YELLOW);
    floodfill(250, 400, 20);
    delay(70);
    cleardevice();

    delay(1000);

    // Debris
    while (i < 700) {
        if (kbhit()) {
            code = getch();
            if (code == 27)
                break;
        }
        x = random(500);
        y = random(500);
        R = random(255);
        G = random(255);
        B = random(255);

        delay(1);
        putpixel(x, y, COLOR(R, G, B));

        i++;
    }


    getch();
    closegraph();
}
