#include<stdio.h>

struct fraction
{
int num,den;
};
typedef struct fraction Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
  int size;
  size=input_n();
  Fraction array[size];
  input_n_fractions(size,array);
  Fraction sum;
  sum=add_n_fractions(size,array);
  output(size,array,sum);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter Number of Fractions you want to add\n");
  scanf("%d",&n);
  return n;
}

Fraction input_fraction()
{
  Fraction f;
  printf("Enter the Numerator and Denominator of the Fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

void input_n_fractions(int n, Fraction f[n])
{
  for (int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
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

Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction add;
  add.num=0;
  add.den=1;
  for (int i=0;i<n;i++)
    {
      add = add_fractions(add,f[i]);
    }
  return add;
}

void output(int n, Fraction f[n], Fraction sum)
{
  int simplification_factor;
  simplification_factor=find_gcd(sum.num,sum.den);
  int i=0;
  while(i<n-1)
    {
      printf("%d/%d + ",f[i].num,f[i].den);
      i++;
    }
  printf("%d/%d = %d/%d = %d/%d\n",f[i].num,f[i].den,sum.num,sum.den,sum.num/simplification_factor,sum.den/simplification_factor);
}