#include <iostream>
#include <graphics.h>
using namespace std;

int main() {
    initwindow(800, 600);

    setlinestyle(3, 10, 1);
    line(200, 450, 600, 450);
    line(400, 525, 400, 375);
    line(200, 450, 400, 375);
    line(400, 375, 600, 450);

    setlinestyle(0, 1, 2);
    line(200, 450, 400, 525);
    line(400, 525, 600, 450);

    line(200, 450, 400, 125);
    line(400, 525, 400, 125);
    line(600, 450, 400, 125);

    getch();
    closegraph();
    return 0;
}
