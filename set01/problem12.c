#include<stdio.h>
struct complex_number 
{
  float real;
  float img;
};

typedef struct complex_number Complex;

int get_n()
{
  int n;
  printf("Enter the size of the Array\n");
  scanf("%d",&n);
  return n;
}

Complex input_complex()
{
  Complex c;
  printf("Enter the Real Part\n");
  scanf("%f",&c.real);
  printf("Enter the Imaginary Part\n");
  scanf("%f",&c.img);
  return c;
}

void input_n_complex(int n, Complex c[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      c[i]=input_complex();
    }
}

Complex add(Complex a, Complex b)
{
  Complex res={0,0};
  res.real=a.real + b.real;
  res.img=a.img + b.img;
  return res;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex tot={0,0};
  int i;
  for (i=0;i<n;i++)
    {
      tot=add(tot,c[i]);
    }
    return tot;
}

void output(int n, Complex c[n], Complex result)
{ 
  printf("The Sum of Entered Complex Numbers ");
  for (int i=0;i<n;i++)
    {
      if (i<n-1)
      {printf("%.1f+%.1fi + ",c[i].real,c[i].img);}
      else
      {printf("%.1f+%.1fi",c[i].real,c[i].img);}
    }
  printf(" is %.1f+%.1fi",result.real,result.img);
}

int main()
{
  int n;
  n=get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}
