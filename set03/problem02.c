#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int result;
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter (x1,y1)\n");
  scanf("%f%f",x1,y1);
  printf("Enter (x2,y2)\n");
  scanf("%f%f",x2,y2);
  printf("Enter (x3,y3)\n");
  scanf("%f%f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  int result;
  area = 0.5 * fabs( (x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2)) );
  if (area==0)
  {
    return 1;
  }
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
{
  if(result==1)
  {
  printf("The Points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) do not form a Triangle\n",x1,y1,x2,y2,x3,y3);
  }
  else
  {
    printf("The Points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) form a Triangle\n",x1,y1,x2,y2,x3,y3);
  }
}