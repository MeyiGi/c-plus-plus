#include <iostream>
#include <graphics.h>
using namespace std;

void figura(int coordinates[], int color) {
    setfillstyle(1, color);
    int poly[12];
    poly[0] = coordinates[0];
    poly[1] = coordinates[1];

    poly[2] = coordinates[2];
    poly[3] = coordinates[3];

    poly[4] = coordinates[4];
    poly[5] = coordinates[5];

    poly[6] = coordinates[6];
    poly[7] = coordinates[7];

    poly[8] = coordinates[8];
    poly[9] = coordinates[9];

    poly[10] = coordinates[0];
    poly[11] = coordinates[1];

    drawpoly(6, poly);
}



int main() {
    initwindow(600, 400);
    cleardevice();

    int x1 = 0,   y1 = 50;
    int x2 = 100, y2 = 50;
    int x3 = 20,  y3 = 140;
    int x4 = 50,  y4 = 0;
    int x5 = 80,  y5 = 140;

    int poly[10];
    poly[0] = x1;
    poly[1] = y1;
    poly[2] = x2;
    poly[3] = y2;
    poly[4] = x3;
    poly[5] = y3;
    poly[6] = x4;
    poly[7] = y4;
    poly[8] = x5;
    poly[9] = y5;

    int dx = 1, dy = 0;
    int code;
    figura(poly, COLOR(255, 255, 255));

    while (true) {
        if (kbhit()) {
            code = getch();

            if (code == 27)
                    break;
            switch(code) {
                case 75:
                    dx = -1; dy =  0 ; break;
                case 72:
                    dx =  0; dy = -1 ; break;
                case 77:
                    dx =  1; dy =  0 ; break;
                case 80:
                    dx =  0; dy =  1 ; break;
            }

        }
        cleardevice();
        figura(poly, COLOR(255, 255, 255));
        delay(10);

        poly[0] += dx;
        poly[1] += dy;
        poly[2] += dx;
        poly[3] += dy;
        poly[4] += dx;
        poly[5] += dy;
        poly[6] += dx;
        poly[7] += dy;
        poly[8] += dx;
        poly[9] += dy;
    }
    getch();
    closegraph();
    return 0;
}
