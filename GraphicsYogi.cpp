#include<graphics.h>
#include<stdio.h>
using namespace std;
main()
{
    initwindow(1536,1336);
    int i=1000;
    while(1)
{
    i=40;
    while(i<1536)
    {
    setcolor(CYAN);
    rectangle(i-600,250,i-100,400);
    rectangle(i-100,330,i,400);
    rectangle(i,250,i+100,400);
    rectangle(i+20,275,i+70,310);
    circle(i-530,434,35);
    circle(i-460,434,35);
    circle(i-300,434,35);
    circle(i-160,434,35);
    circle(i+47,434,35);
    delay(1);
    cleardevice();
    i++;
    }
}
 getch();
 closegraph();
}
