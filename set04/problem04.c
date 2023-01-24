#include<stdio.h>
#include<math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
  float x;
  x=input_x();
  int highest_degree;
  highest_degree=input_degree();
  float coeff[highest_degree];
  input_coefficients(highest_degree,coeff);
  float result;
  result=evaluate_polynomial(highest_degree,coeff,x);
  output(highest_degree,coeff,x,result);
  return 0;
}

int input_degree()
{
  int n;
  printf("Enter the Highest Degree of 'x'\n");
  scanf("%d",&n);
  return n;
}

void input_coefficients(int n, float a[n])
{
  for (int i=0;i<=n;i++)
    {
      printf("Enter Co-Efficient for x^%d \n",i);
      scanf("%f",&a[i]);
    }
}

float input_x()
{
  float x;
  printf("Enter the Value of 'x'\n");
  scanf("%f",&x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
  float sum=0;
  for (int i=0;i<=n;i++)
    {
      sum=sum+(a[i]*(pow(x,i)));
    }
  return sum;
}

void output(int n, float a[n], float x, float result)
{
  int i=0;
  while(i<=n-1)
    {
      printf("%.2f * %.2f^%d + ",a[i],x,i);
      i++;
    }
  printf("%.2f * %.2f^%d = %.2f\n",a[i],x,i,result);
}