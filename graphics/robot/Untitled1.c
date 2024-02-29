#include<iostream>
#include<graphics.h>
#include<locale.h>
using namespace std;

int main() {
    setlocale(0,"Russian");
    initwindow(600,800);
    //bar(135, 125, 250, 200);
    //bar(120, 215, 265, 415);
    //bar(115, 230, 95, 365);
    //bar(289, 230, 269, 365);
    bar(200, 100, 400, 200);
    bar(175, 205, 425, 500);
    bar(140, 220, 170, 450);
    bar(460, 220, 430, 450);
    bar(220, 505, 270, 700);
    bar(380, 505, 330, 700);
    getch();
    closegraph();
    return 0;
}
