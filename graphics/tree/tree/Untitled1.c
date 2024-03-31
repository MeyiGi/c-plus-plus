#include <iostream>
#include <graphics.h>
#include <math.h>

void tree(float x, float y, float len, float a, float b);

int main() {
    initwindow(400, 600);
    cleardevice();
    int gd = 0, gm, i, rd;

    float x = 200, y = 450, t = 100;

    for(i = 0; i <= 1; i++) {
        tree(x + i, y, t, 90,  30);
        tree(x + i, y, t, 90, -30);
    }

    getch();
    closegraph();
}

void tree(float x, float y, float len, float a, float b) {
    if (len < 20) {
        delay(5);

        setcolor(4);  circle(x, y, 6);
        setcolor(10); circle(x, y, 5);

        return;
    }

    float x1, y1;

    setcolor(12);
    x1 = x + len * cos( 3.14 * a / 180);
    y1 = y + len * sin(-3.14 * a / 180);

    line(x, y, x1, y1);
    tree(x1, y1, len * 0.75, a - b,  b);
    tree(x1, y1, len * 0.75, a - b, -b);
}
