#include <iostream>
#include <graphics.h>
using namespace std;

int main() {

    setlocale(0, "Russian");
    initwindow(400, 600);

    // Layout of snowman
    circle(200, 115, 35);
    circle(200, 200, 50);
    circle(200, 315, 65);

    // Buttons of snowman
    circle(200, 180, 5);
    circle(200, 200, 6);
    circle(200, 220, 5);

    // Face of snowman
    circle(190, 115, 5);
    circle(210, 115, 5);

    // Smile
    bar(195, 125,205, 145);

    // Hat
    bar(155, 100, 245, 80);
    bar(175, 85, 225, 40);

    // Right hand
    line(245, 180, 300, 150);
    line(300, 150, 320, 150);
    line(300, 150, 325, 136);
    line(300, 150, 310, 130);

    // Left hand
    line(155, 180, 100, 150);
    line(100, 150, 80,  150);
    line(100, 150, 75, 136);
    line(100, 150, 90, 130);


    getch();
    closegraph();
    return 0;
}
