#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main() {
    initwindow(1300, 500);

    // First row
    setfillstyle(1, 1);
    bar(100, 50, 300, 150);

    setfillstyle(2, 2);
    bar(400, 50, 600, 150);

    setfillstyle(3, 3);
    bar(700, 50, 900, 150);

    setfillstyle(4, 4);
    bar(1000, 50, 1200, 150);

    // Second row
    setfillstyle(5, 5);
    bar(100, 200, 300, 300);

    setfillstyle(6, 6);
    bar(400, 200, 600, 300);

    setfillstyle(7, 7);
    bar(700, 200, 900, 300);

    setfillstyle(8, 8);
    bar(1000, 200, 1200, 300);

    // Thirs row
    setfillstyle(9, 9);
    bar(100, 350, 300, 450);

    setfillstyle(10, 10);
    bar(400, 350, 600, 450);

    setfillstyle(11, 11);
    bar(700, 350, 900, 450);

    setfillstyle(5, 12);
    bar(1000, 350, 1200, 450);


    // In my case setfill(12, 12) not working
    // I have no idea why ¯\_(ツ)_/¯

    getch();
    closegraph();
    return 0;
}
