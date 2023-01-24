#include <stdio.h>

int input();
void compare(int a, int b, int c, int *large);
void output(int a, int b, int c, int large);

int main(void){
  int a,b,c, large;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}

int input()
{
  int a;
  printf("Enter number \n");
  scanf("%d",&a);
  return a;
}

void compare(int a, int b, int c, int *large)
{
  if((a>b)&&(a>c))
  {*large=a;}
  else if(b>=c)
    {*large=b;}
  else
    {*large=c;}
}

void output(int a, int b, int c,int large)
{
  printf("%d is largest among %d, %d, and %d",large,a,b,c);
}