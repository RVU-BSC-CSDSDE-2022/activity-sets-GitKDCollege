#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number \n");
  scanf("%d",&a);
  return a;
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main(void){
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}