#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int x,y, dx, dy,vx,vy, sol_tereze=0, sayi=1;

void Sound(const char *filename) {
    PlaySound(TEXT(filename),NULL, SND_ASYNC);
}

int random (int N) {
    return rand() % N+1;
}

void Biytik_Tart() {
    int i = random(6);
    int j = random(12);
    x=j*50; y=i*50;
    readimagefile("phasa_1.jpg", x, y, x+49, y+49);
}

void Jashir(int x, int y) {
    bar(x,y,x+51,y+51);
    sayi=sayi+1;
    sol_tereze=sol_tereze+31;
    readimagefile("phasa_2.jpg", 0, sol_tereze, 31, sol_tereze+30);
}

void Dracon(int i, int j) {
    readimagefile("phasa_3.jpg", i, j, i+49, j+49);
    delay(50);
    bar(i,j,i+50,j+50);
}

void Karma() {
    Biytik_Tart();
    while (sayi<=5) {
        int c1=getpixel(dx-1,dy);
        int c2=getpixel(dx+51,dy);
        int c3=getpixel(dx,dy-1);
        int c4=getpixel(dx+1,dy+51);
        int c5=getpixel(dx,dy);
        int c6=getpixel(dx+49, dy+51);

        if(c1!=WHITE || c2!=WHITE || c3!=WHITE || c4!=WHITE || c5!=WHITE || c6 != WHITE) {
            Jashir(x,y);
            Sound("outside.wav");
            Biytik_Tart();
        }

        Dracon(dx,dy);
        if (kbhit()) {
            char key=getch();
            if(key=='a') {
                vx=-4; vy=0;
            }
            if(key=='x') {
                vx=0; vy=4;
            }
            if(key=='d') {
                vx=4; vy=0;
            }
            if(key=='w') {
                vx=0; vy=-4;
            }
            if(key=='e') {
                vx=3; vy=-3;
            }
            if(key=='q') {
                vx=-3; vy=-3;
            }
            if(key=='z') {
                vx=-3; vy=3;
            }
            if(key=='c') {
                vx=3; vy=3;
            }
            if(key=='s') {
                vx=0; vy=0;
            }
        }
        dx=dx+vx;
        dy=dy+vy;

        if(dx>=745)
            dx=745;
        if(dx<=50)
            dx=50;
        if(dy>=545)
            dy=545;
        if(dy<=50)
            dy=50;
    }
}

void Rezultat() {
    bar(0, 0, 800, 600);
    readimagefile("good.jpeg", 300, 200, 500, 400);
    rectangle(300,200,500,400);
    Sound("good.wav");
    getch();
}

int main() {
    initwindow (800, 600);
    srand(time(0));
    dx=380; dy=290; vx=3; vy=3;

    setbkcolor(WHITE);
    cleardevice();

    Karma();
    Rezultat();
    getch();

    closegraph();
    return 0;
}

