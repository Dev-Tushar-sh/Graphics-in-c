#include<graphics.h>
#include<stdio.h>
using namespace std;
int main()
{

    initwindow(1536,1366,"NEXT");
    rectangle(405,310,440,315);
    line(400,250,450,250);
    line(450,250,500,300);
    rectangle(50,200,400,400);
    rectangle(400,300,500,400);
    circle(150,450,50);
    circle(328,450,50);
    circle(450,450,50);
    getch();
    closegraph();

  return 0;
}
