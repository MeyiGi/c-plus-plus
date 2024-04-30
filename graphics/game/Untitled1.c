#include <graphics.h>
#include <windows.h>
#include <mmsystem.h>
#include <time.h>
#include <stdio.h>
using namespace std;

void frog(int i, int j) {
    int x = j * 100;
    int y = i * 100;
    readimagefile("phasa_1.jpg", x, y, x + 99, y + 99);
}

void screen() {
    for (int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 6; j++) {
            frog(i, j);
            delay(100);
        }
    }
}

void hide(int i, int j) {
    int x, y;
    x = j * 100;
    y = i * 100;
    readimagefile("phasa_2.jpg", x, y, x + 99, y + 99);
    delay(100);
    readimagefile("phasa_3.jpg", x, y, x + 99, y + 99);
    delay(100);
    bar(x, y, x + 100, y + 100);
}

void play_sound(const char *filename) {
    PlaySound(TEXT(filename), NULL, SND_ASYNC);
}

void start() {
    setcolor(RED);
    settextstyle(COMPLEX_FONT, HORIZ_DIR, 14);
    outtextxy(190, 50, "For start game, press any key.");
    play_sound("8-bit-game-1-186975.wav");
    getch();
    bar(0, 0, 800, 80);
}

void PrintTime(float time) {
    char str[20];
    sprintf(str, "%.2f", time);
    outtextxy(370, 50, str);
    rectangle(350, 45, 445, 75);
}

float TimeInSec() {
    return (float)clock()/CLOCKS_PER_SEC;
}

void excellent() {
    readimagefile("excellent.jpeg", 300, 200, 500, 400);
    rectangle(300, 200, 500, 400);
    play_sound("excellent.wav");
    getch();
}

void good() {
    readimagefile("good.jpeg", 300, 200, 500, 400);
    rectangle(300, 200, 500, 400);
    play_sound("good.wav");
    getch();
}

int main() {
    initwindow(800, 525);

    setbkcolor(WHITE);
    cleardevice();

    screen();
    start();

    int count = 18;
    float time_start = TimeInSec();
    float time_game  = 0;

    PrintTime(time_game);

    while(count) {
        if (ismouseclick(WM_LBUTTONDOWN)) {
            int x = mousex();
            int y = mousey();
            int c = getpixel(x, y);

            if (c != WHITE) {
                int i = y / 100;
                int j = x / 100;
                hide(i, j);
                play_sound("inside.wav");
                count -= 1;
            }
            else
                play_sound("outside.wav");
            clearmouseclick(WM_LBUTTONDOWN);
        }
        delay(20);
        time_game = TimeInSec() - time_start;
        PrintTime(time_game);
    }

    if (time_game < 10)
        excellent();
    else
        good();

    getch();
    closegraph();
    return 0;
}
