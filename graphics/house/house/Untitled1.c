#include <graphics.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    initwindow(800, 600);

    // main
    rectangle(150, 500, 650, 550);
    rectangle(185, 300, 615, 500);
    rectangle(375, 500, 425, 400); // <-- door
    ellipse(400, 270, 0, 360, 30, 15);

    // bricks
    for (int x = 150; x < 650; x += 100) {

        if (x == 150) {
            rectangle(x, 500, x + 50, 525);
        }
        rectangle(x, 525, x + 100, 550);

        if (x == 550) {
            rectangle(x + 50, 500, x + 100, 525);
            break;
        }

        rectangle(x + 50, 500, x + 150, 525);
    }

    // roof
    int poly[8];
    poly[0] = 150;
    poly[1] = 300;
    poly[2] = 650;
    poly[3] = 300;
    poly[4] = 400;
    poly[5] = 200;
    poly[6] = 150;
    poly[7] = 300;
    drawpoly(4, poly);

    // windows
    rectangle(250, 450, 325, 350);
    rectangle(475, 450, 550, 350);
    line(287, 450, 287, 350);
    line(250, 400, 325, 400);
    line(513, 450, 513, 350);
    line(475, 400, 550, 400);

    // chimney
    line(525, 250, 525, 200);
    line(545, 258, 545, 200);
    line(525, 200, 545, 200);

    // smokes
    ellipse(540, 180, 0, 360, 10, 10);
    ellipse(560, 150, 0, 360, 20, 15);
    ellipse(600, 110, 0, 360, 30, 20);

    getch();
    closegraph();
    return 0;
}
