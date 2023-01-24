#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int large);

int main(void){
  int a,b,c, large;
  a=input();
  b=input();
  c=input();
  large=compare(a,b,c);
  output(a,b,c,large);
  return 0;
}

int input()
{
  int a;
  printf("Enter number\n");
  scanf("%d",&a);
  return a;
  }

int compare(int a, int b, int c)
{
  // if((a>=b)&&(a>=c))
  // {large=a;}
  // else if((b>=a)&&(b>=c))
  // {large=b;}
  // else if((c>=a)&&(c>=b))
  // {large=c;}
  // --------------------------- //
  if((a>b)&&(a>c))
  {return a;}
  else if(b>c)
    {return b;}
  else
    {return c;}
  // --------------------------- //
}

void output(int a, int b, int c,int large)
{
  printf("%d is largest among %d, %d, and %d",large,a,b,c);
}