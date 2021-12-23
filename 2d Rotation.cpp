/*#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
    int x1=20,y1=-40,x2=40,y2=-20,x3=80,y3=-120;
    double s,c, angle=120;
     initwindow(1536,1366,"NEXT");
    setcolor(RED);
    printf("Enter coordinates of triangle: ");
  //  scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);
    setbkcolor(WHITE);
    cleardevice();
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    getch();
    setbkcolor(BLACK);
    printf("Enter rotation angle: ");
   // scanf("%lf", &angle);
    setbkcolor(WHITE);
    c = cos(angle *M_PI/180);
    s = sin(angle *M_PI/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    cleardevice();
    line(x1, y1 ,x2, y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}*/
//Program to rotate a line:
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=0,gm,x1,y1,x2,y2;
    double s,c, angle;
      initwindow(1536,1366,"NEXT");
    setcolor(RED);
    printf("Enter coordinates of line: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    cleardevice();
    setbkcolor(WHITE);
    line(x1,y1,x2,y2);
    getch();
    setbkcolor(BLACK);
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    setbkcolor(WHITE);
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    cleardevice();
    line(x1, y1 ,x2, y2);
    getch();
    closegraph();
return 0;
}
