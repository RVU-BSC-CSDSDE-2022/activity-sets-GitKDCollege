#include<stdio.h>
#include<math.h>

struct camel
{
  float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void output(Camel c);

Camel input()
{
  Camel c;
  printf("Enter Stomach Radius of the Camel\n");
  scanf("%f",&c.radius);
  printf("Enter Height of the Camel\n");
  scanf("%f",&c.height);
  printf("Enter Length of the Camel\n");
  scanf("%f",&c.length);
  return c;
}

float find_weight(Camel c)
{
  float pi=3.1415;
  float temp;
  float sqrt_hl;
  sqrt_hl=sqrt(c.height*c.length);
  c.weight=pi*(c.radius*c.radius*c.radius)*sqrt_hl;
  return c.weight;
}

void output(Camel c)
{
  printf("The Weight of the Camel with Stomach Radius : %.1f , Height : %.1f and Length : %.1f is %.4f\n",c.radius,c.height,c.length,c.weight);
}

int main()
{
  Camel c;
  c=input();
  c.weight=find_weight(c);
  output(c);
  return 0;
}