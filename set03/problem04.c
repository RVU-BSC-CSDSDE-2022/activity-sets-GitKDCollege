#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n;
  n=input();
  int fibo;
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}

int input()
{
  int n;
  printf("Enter 'n' for fibo(n)\n");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int i;
  int fib[n+1];
  for (i=0;i<n+1;i++)
    {
      if (i==0)
      {
        fib[i]=0;
      }
      else if ((i==1)||(i==2))
      {
        fib[i]=1;
      }
      else
      {
        fib[i]=fib[i-1] + fib[i-2];
      }
    }
  return fib[n];
}

void output(int n, int fibo)
{
  printf("fibo(%d) = %d\n",n,fibo);
}