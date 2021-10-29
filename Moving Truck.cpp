#include<graphics.h>
#include<stdio.h>
using namespace std;
int main()
{
    initwindow(1536,1366,"NEXT");
    int i=400;

   while(1)
{
    i=40;
    while(i<1536)
    {
    settextstyle(8,0,5);
    outtextxy(910,10,"WELCOME");
    line(0,500,1536,500);
    rectangle(900,10,1100,100);
    line(1000,100,1000,500);
    setcolor(WHITE);

    circle(i-250,450,50);
    circle(i-72,450,50);
    circle(i+50,450,50);
    setcolor(CYAN);
    rectangle(i+5,310,i+40,315);
    line(i-180,250,i-180,350);
    line(i-225,250,i-135,250);
    line(i,250,i+50,250);
    line(i+50,250,i+100,300);
    rectangle(i-350,200,i,400);
    rectangle(i,300,i+100,400);
    delay(5);
    cleardevice();
    i++;
    }
}
    getch();
    closegraph();

  return 0;

}
