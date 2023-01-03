#include<stdio.h>
#include<math.h>

struct point
{
float x,y;
};
typedef struct point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
  Point a,b;
  a=input();
  b=input();
  float res;
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}

Point input()
{
  Point p;
  printf("Enter the Co-Ordinates (x,y)\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}

void dist(Point a, Point b, float *res)
{
  *res=sqrt((pow((b.y-a.y),2))+(pow((b.x-a.x),2)));
}

void output(Point a, Point b, float res)
{
  printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.4f\n",a.x,a.y,b.x,b.y,res);
}