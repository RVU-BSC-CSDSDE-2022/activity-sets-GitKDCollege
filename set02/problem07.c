#include<stdio.h>
struct _triangle 
{
  float base;
  float altitude;
  float area;
};

typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the Base of the Triangle\n");
  scanf("%f",&t.base);
  printf("Enter the Altitude of the Triangle\n");
  scanf("%f",&t.altitude);
  return t;
}

void find_area(Triangle *t)
{
  t->area=(t->base)*(t->altitude)*0.5;
}

void output(Triangle t)
{
  printf("The area of the Triangle with Base %.2f and Altitude %.2f is %.2f",t.base,t.altitude,t.area);
}
int main(void)
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}