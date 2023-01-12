#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int n;
  printf("Enter the Number\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  int i=0,result=0;
  int count=0;
  for (i=2;i*i<=n;i++)
    {
      if (n%i==0)
      {
        result=1;
      }
    }
  return result;
}

void output(int n, int result)
{
  if (result==0)
  {
    printf("The Entered Number %d is not Composite\n",n);
  }
  else if (result==1)
  {
    printf("The Entered Number %d is Composite\n",n);
  }
}