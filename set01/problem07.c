#include <stdio.h>

int input();
int sum_n_nos(int n);
void output(int n, int sum);

int main(void)
{
  int n,sum;
  n=input();
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
}

int input()
{
  int n;
  printf("Enter 'n'\n");
  scanf("%d",&n);
  return n;
}

int sum_n_nos(int n)
{
  return (n*(n+1))/2;
}

void output(int n, int sum)
{
  printf("Sum of first %d natural numbers is %d",n,sum);
}