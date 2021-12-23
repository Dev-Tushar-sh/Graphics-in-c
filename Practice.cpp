#include<graphics.h>
int main()
{

    int arr[]={400,400,100,100,300,300,200,200};
    initwindow(1500,1300);
    putpixel(400,400,RED);
    line(400,400,500,500);
    lineto(400,400);
    ellipse(400,400,0,0,100,50);
    drawpoly(5,arr);
    outtextxy(500,500,"HELLO"),rectangle(500,500,100,100);
    getch();

}
