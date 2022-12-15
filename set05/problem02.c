#include<stdio.h>

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
  float temp;
  float sqrt;
  float weight;
  sqrt=(height*length)/2;
  temp=0;
  while (temp!=sqrt){
    temp=sqrt;
    sqrt=(((height*length)/temp)+temp)/2;
  }
  weight=pi*(radius*radius*radius)*sqrt;
  return weight;
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