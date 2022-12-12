#include<stdio.h>
struct complex_number 
{
  float real;
  float imaginary;
};

typedef struct complex_number Complex;

Complex input_complex(Complex c)
{
  printf("Enter the Real Part of Complex Number\n");
  scanf("%f",&c.real);
  printf("Enter the Imaginary Part of Complex Number\n");
  scanf("%f",&c.imaginary);
  return c;
}

Complex add_complex(Complex a, Complex b)
{
  // complex a; complex b;
  Complex res;
  res.real=a.real + b.real;
  res.imaginary=a.imaginary + b.imaginary;
  return res;
}

void output(Complex a, Complex b, Complex sum)
{
  // complex a; complex b; complex sum;
  printf("The Sum of Complex Numbers %.2f + i(%.2f) and %.2f + i(%.2f) is %.2f + i(%.2f)",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

int main(void)
{
  Complex c1, c2, sum;
  c1=input_complex(c1);
  c2=input_complex(c2);
  sum=add_complex(c1,c2);
  output(c1,c2,sum);
  return 0;
}