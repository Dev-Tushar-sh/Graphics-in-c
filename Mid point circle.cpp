/*#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
class bresen
{
    float x, y,a, b, r, p;
    public:
    void get ();
    void cal ();
};
    int main ()
    {
    bresen b;
    b.get ();
    b.cal ();
    getch ();
   }
    void bresen :: get ()
   {
    cout<<"ENTER CENTER AND RADIUS";
     cout<< "ENTER (a, b)";
    cin>>a>>b;
    cout<<"ENTER r";
    cin>>r;
}
void bresen ::cal ()
{
    int gdriver = DETECT,gmode, errorcode;
    int midx, midy, i;

  initwindow(1500,1300);
    errorcode = graphresult ();
    if (errorcode!= grOK())
    {
        printf("Graphics error: %s \n", grapherrormsg(errorcode));
        printf ("Press any key to halt:");
        getch ();
        exit (1);
    }
    x=0;
    y=r;
    putpixel (a, b+r, RED);
    putpixel (a, b-r, RED);
    putpixel (a-r, b, RED);
    putpixel (a+r, b, RED);
    p=(5/4)-r;
    while (x<=y)
    {
        if (p<0)
        p+= (4*x)+6;
        else
        {
            p+=(2*(x-y))+5;
            y--;
        }
        x++;
        putpixel (a+x, b+y, RED);
        putpixel (a-x, b+y, RED);
        putpixel (a+x, b-y, RED);
        putpixel (a+x, b-y, RED);
        putpixel (a+x, b+y, RED);
        putpixel (a+x, b-y, RED);
        putpixel (a-x, b+y, RED);
        putpixel (a-x, b-y, RED);
    }
}
*/
#include<stdio.h>
#include<graphics.h>

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
putpixel(x0 + x, y0 + y, 7);
putpixel(x0 + y, y0 + x, 7);
putpixel(x0 - y, y0 + x, 7);
putpixel(x0 - x, y0 + y, 7);
putpixel(x0 - x, y0 - y, 7);
putpixel(x0 - y, y0 - x, 7);
putpixel(x0 + y, y0 - x, 7);
putpixel(x0 + x, y0 - y, 7);

if (err <= 0)
{
    y += 1;
    err += 2*y + 1;
}

if (err > 0)
{
    x -= 1;
    err -= 2*x + 1;
}
    }
}

int main()
{
int gdriver=DETECT, gmode, error, x=300, y=300, r=200;
initwindow(1500,1300);

drawcircle(x, y, r);
getch();

return 0;
}
