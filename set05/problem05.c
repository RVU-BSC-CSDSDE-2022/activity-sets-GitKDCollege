#include<stdio.h>

int input(int x);
float borga_x(int x);
void output(int x, float result);

int main()
{
  int x;
  x=input(x);
  float sum;
  sum=borga_x(x);
  float result;
  result=sum;
  output(x,result);
  return 0;
}

int input(int x)
{
  printf("Enter 'x' for Borga(x)\n");
  scanf("%d",&x);
  return x;
}

float borga_x(int x)
{
  float num=1;
  float den;
  float sum=1;
  int i=1;
  int j=1;
  while (i>0){
      den=1;
      for (j=1;j<=((2*i)+1);j++){
          den=den*j;
      }
      num=num*x;
      if ((num/den)>0.000001){
          sum=sum+(num/den);
          i=i+1;
      }
      else{
          break;
      }
    }
  return sum;
}

void output(int x, float result)
{
  printf("Borga(%d) = %f\n",x,result);
}