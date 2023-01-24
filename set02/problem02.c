#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

int input_side()
{
  int n;
  printf("Enter the Side of the Triangle\n");
  scanf("%d",&n);
  return n;
}

int check_scalene(int a, int b, int c)
{
  if ((a!=b) && (a!=c) && (b!=c))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void output(int a, int b, int c, int isscalene)
{
  if (isscalene==1)
  {
    printf("The Triangle with Sides %d , %d and %d is a Scalene Triangle\n",a,b,c);
  }
  else
  {
    printf("The Triangle with Sides %d , %d and %d is not a Scalene Triangle\n",a,b,c);
  }
}