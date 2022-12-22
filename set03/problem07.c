#include<stdio.h>
#include<math.h>

struct point
{
  float x,y;
};
typedef struct point Point;

struct line
{
  Point p1,p2;
  float distance;
};
typedef struct line Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}

Point input_point()
{
  Point p;
  printf("Enter (x,y)\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}

Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}

void find_length(Line *l)
{
  float dist;
  dist=sqrt((pow((l->p2.y)-(l->p1.y),2)) + (pow((l->p2.x)-(l->p1.x),2)));
  l->distance=dist;
}

void output(Line l)
{
  printf("The distance between the Points (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}