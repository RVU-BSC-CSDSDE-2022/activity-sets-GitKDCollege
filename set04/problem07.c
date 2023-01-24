#include<stdio.h>

struct fraction
{
int num,den;
};
typedef struct fraction Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}

Fraction input_fraction()
{
  Fraction f;
  printf("Enter the Numerator\n");
  scanf("%d",&f.num);
  printf("Enter the Denominator\n");
  scanf("%d",&f.den);
  return f;
}

int find_gcd(int a, int b)
{
  float gcd;
  int i;
  for (i=1;(i<=a||i<=b);i++)
    {
      if ((a%i==0)&&(b%i==0))
      {
        gcd=i;
      }
    }
  return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction result;
  float hcf=find_gcd(f1.den,f2.den);
  result.den=(f1.den*f2.den)/hcf;
  f1.num=f1.num*(result.den/(f1.den));
  f2.num=f2.num*(result.den/(f2.den));
  result.num=f1.num + f2.num;
  return result;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
  int simplification;
  simplification=find_gcd(sum.num,sum.den);
  printf("%d/%d + %d/%d = %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den,sum.num/simplification,sum.den/simplification);
}