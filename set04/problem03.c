#include<stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=nCr(n,r);
  output(n,r,result);
  return 0;
}

void input_n_and_r(int *n, int *r)
{
  printf("Enter 'n' for nCr\n");
  scanf("%d",n);
  printf("Enter 'r' for nCr\n");
  scanf("%d",r);
}

int nCr(int n, int r)
{
  int n_fact=1,r_fact=1,n_r_fact=1;
  int result;
  int i;
  for (i=1;i<=n;i++)
    {
      if (i<=r)
      {
        r_fact = r_fact * i;
        n_r_fact = n_r_fact * i;
      }
      else if (i<=n-r)
      {
        n_r_fact = n_r_fact * i;
      }
      n_fact = n_fact * i;
    }
  result=n_fact/((n_r_fact)*(r_fact));
  return result;
}

void output(int n, int r, int result)
{
  printf("For n = %d and r = %d, nCr = %d\n",n,r,result);
}