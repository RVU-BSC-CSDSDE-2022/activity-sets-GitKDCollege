#include<stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n;
  n=input_number();
  int result;
  result=is_prime(n);
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

int is_prime(int n)
{
  int i,result,count=0;
  for (i=0;i<n;i++)
    {
      if (n%(i+1)==0)
      {
        count=count+1;
      }
    }
  if (count==2)
  {
    result=1;
  }
  else
  {
    result=0;
  }
  return result;
}

void output(int n, int result)
{
  if (n==0)
  {
    printf("%d is neither a Prime Number nor a Composite Number\n",n);
  }
  else if ((n==1)||(result==1))
  {
    printf("%d is a Prime Number\n",n);
  }
  else 
  {
    printf("%d is not a Prime Number\n",n);
  }
}