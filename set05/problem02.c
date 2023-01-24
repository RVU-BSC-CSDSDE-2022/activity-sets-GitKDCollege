#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

void input_camel_details(float *radius, float *height, float *length)
{ float weight;
  printf("Enter Stomach Radius of the Camel\n");
  scanf("%f",radius);
  printf("Enter Height of the Camel\n");
  scanf("%f",height);
  printf("Enter Length of the Camel\n");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float pi=3.1415;
  float sqrt_hl;
  sqrt_hl=sqrt(height*length);
  return pi*(radius*radius*radius)*sqrt_hl;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the Camel with Stomach Radius : %.2f , Height : %.2f and Length : %.2f is %.4f",radius,height,length,weight);
}

int main()
{
  float radius,height,length;
  float weight;
  input_camel_details(&radius,&height,&length);
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}