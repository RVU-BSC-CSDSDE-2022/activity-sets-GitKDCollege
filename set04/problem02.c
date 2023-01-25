#include<stdio.h>

struct fract
{
  int num,den;
};
typedef struct fract Fraction;

Fraction input_fraction();
Fraction compare(Fraction a, Fraction b, Fraction c);
void output(Fraction a, Fraction b, Fraction c, Fraction smallest);

int main()
{
  Fraction x,y,z,smallest;
  x=input_fraction();
  y=input_fraction();
  z=input_fraction();
  smallest=compare(x,y,z);
  output(x,y,z,smallest);
  return 0;
}

Fraction input_fraction()
{
  Fraction f;
  printf("Enter Numerator and Denominator Respectively\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

Fraction compare(Fraction a, Fraction b, Fraction c)
{
  float d=0,e=0,f=0;
  d=(a.num*1.0)/(a.den*1.0); 
  e=(b.num*1.0)/(b.den*1.0);
  f=(c.num*1.0)/(c.den*1.0);
  //Multiplied with 1.0 to make a.num(int) as a float.
  if (d<e && d<f){return a;}
  else if (e<f){return b;}
  else{return c;}
}

void output(Fraction a, Fraction b, Fraction c, Fraction smallest)
{
  printf("The Smallest among %d/%d, %d/%d and %d/%d is %d/%d\n",a.num,a.den,b.num,b.den,c.num,c.den,smallest.num,smallest.den);
}