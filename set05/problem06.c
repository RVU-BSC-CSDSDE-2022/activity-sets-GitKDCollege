#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the Size of Array\n");
  scanf("%d",&n);
  return n;
}

void input(int n, int a[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      printf("Enter Number %d of Array\n",i+1);
      scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
  int i,sum=0,count=0;
  for (i=0;i<n;i++)
    {
      if (a[i]%2!=0)
      {
        sum=sum+a[i];
        count+=1;
      }
    }
  return sum/count;
}

void output(float avg)
{
  printf("The Average of the Odd Elements in the Array is %.2f\n",avg);
}