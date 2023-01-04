#include <stdio.h>
float input();
float square_root(float n);
void output(float n,float sqrt);


int main(void)
{
  float n,sqrt,temp;
  n=input();
  sqrt=square_root(n);
  output(n,sqrt);
  //printf("%f", sqrt);
  return 0;
}

float input()
{
  float n;
  printf("Enter the number 'n'\n");
  scanf("%f",&n);
  return n;
}

float square_root(float n)
{
  float temp,sqrt;
  temp=0;
  sqrt=n/2;
  while (sqrt != temp)
    {
      temp=sqrt;
      sqrt=((n/temp)+temp)/2;
    }
  
  return sqrt;
}

void output(float n,float sqrt)
{
  printf("Square root of %f is %f",n,sqrt);
}