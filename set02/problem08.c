#include<stdio.h>

typedef struct _triangle
{
  float base,altitude,area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
  int n;
  n=input_n();
  Triangle t[n];
  Triangle smallest;
  input_n_triangles(n,t);
  find_area(&t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}


int input_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}

void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      printf("Enter Base of Triangle - %d\n",i+1);
      scanf("%f",&t[i].base);
      printf("Enter Altitude of Triangle - %d\n",i+1);
      scanf("%f",&t[i].altitude);
    }
}

void find_area(Triangle *t)
{
  t->area = (t->base) * (t->altitude) * (0.5);
}

void find_n_areas(int n, Triangle t[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest;
  smallest.area=0;
  int i;
  for (i=0;i<n;i++)
    {
      if (i==0)
      {
        smallest.area=t[i].area;
        smallest.base=t[i].base;
        smallest.altitude=t[i].altitude;
      }
      else if (t[i].area<smallest.area)
      {
        smallest.area=t[i].area;
        smallest.base=t[i].base;
        smallest.altitude=t[i].altitude;
      }
    }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The Smallest Triangle out of Triangles with (Base,Height) as ");
  int i=0;
  while(i<n-1)
    {
      printf("(%.1f,%.1f) , ",t[i].base,t[i].altitude);
      i++;
    }
  printf("(%.1f,%.1f) is the Triangle having Base %.2f , Height %.2f and Area %.2f",t[i].base,t[i].altitude,smallest.base,smallest.altitude,smallest.area);
}