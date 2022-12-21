#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}


int input()
{
  int x;
  printf("Enter the Number\n");
  scanf("%d",&x);
  return x;
}

int find_gcd(int a, int b)
{
  int i;
  int grt;
  int store;
  if (a<b)
  {
    grt=a;
  }
  else if (b<a)
  {
    grt=b;
  }
  for (i=0;i<grt;i++)
    {
       if ((a%(i+1)==0) && (b%(i+1)==0))     
       {
         store=i+1;
       }
    }
  return store;
}

void output(int a, int b, int gcd)
{
  printf("GCD(Greatest Common Divisor)/HCF(Highest Common Factor) of %d and %d is %d\n",a,b,gcd);
}