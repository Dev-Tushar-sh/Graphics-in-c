#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int graDriver=DETECT,graMode;
int n,xs[100],ys[100],i;
float shearXfactor,shearYfactor;

void DrawFn()
{
for(i=0;i<n;i++)
 line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
}

void shearAlongX()
{
for(i=0;i<n;i++)
 xs[i]=xs[i]+shearXfactor*ys[i];
}

void shearAlongY()
{
for(i=0;i<n;i++)
 ys[i]=ys[i]+shearYfactor*xs[i];
}

int main()
{
printf("Enter number of sides: ");
scanf("%d",&n);
printf("Enter co-rdinates: x,y for each point ");
for(i=0;i<n;i++)
 scanf("%d%d",&xs[i],&ys[i]);
printf("Enter x shear factor:");
scanf("%f",&shearXfactor);
printf("Enter y shear factor:");
scanf("%f",&shearYfactor);

initwindow(1500,1300);
setcolor(RED);
DrawFn();//original
shearAlongX();
setcolor(BLUE);
DrawFn();//Xshear
shearAlongY();
setcolor(GREEN);
DrawFn();//Yshear
getch();

}