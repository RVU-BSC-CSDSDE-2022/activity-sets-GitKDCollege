#include<stdio.h>
#include<math.h>

struct point
{
  float start_end_x,start_end_y;
};
typedef struct point Point;

struct side
{
  Point p1,p2;
  float distance;
};
typedef struct side Side;

struct polygon
{
  int n;
  Side sides[100];
  float perimeter;
};
typedef struct polygon Polygon;

int input_n();
Point input_point();
void input_n_points(int n, Point p[n]);
void initialize_sides( Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
  Polygon p;
  initialize_sides(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter number of sides of the Polygon\n");
  scanf("%d",&n);
  return n;
}

Point input_point()
{
  Point p;
  printf("Enter the Co-Ordinates (x,y)\n");
  scanf("%f%f",&p.start_end_x,&p.start_end_y);
  return p;
}

void initialize_sides(Polygon *p)
{
  int n;
  p->n=input_n();
  printf("For %d sided polygon, there will be %d points\n",p->n,p->n);
  Side sides[n];
  int i;
  for (i=0;i<p->n;i++)
    {
      printf("For Point-%d ",i+1);
      p->sides[i].p1=input_point();
    }
}

float find_distance(Point a, Point b)
{
  float distance;
  distance=sqrt((pow((b.start_end_y - a.start_end_y),2)) + (pow((b.start_end_x - a.start_end_x),2)));
  return distance;
}

void find_perimeter(Polygon *p)
{
  p->perimeter=0;
  int i=0;
  while (i<p->n-1)
    {
      p->perimeter=p->perimeter + find_distance(p->sides[i].p1,p->sides[i+1].p1);
      i++;
    }
  p->perimeter=p->perimeter + find_distance(p->sides[i].p1,p->sides[0].p1);
}

void output(Polygon p)
{
  printf("The Perimeter of the Polygon is %f\n",p.perimeter);
}