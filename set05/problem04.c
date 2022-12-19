#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float radius,height,length;
  int mood;
  input_camel_details(&radius,&height,&length);
  mood=find_mood(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter Stomach Radius of the Camel\n");
  scanf("%f",radius);
  printf("Enter Height of the Camel\n");
  scanf("%f",height);
  printf("Enter Length of the Camel\n");
  scanf("%f",length);
}

int find_mood(float radius, float height, float length)
{
  int mood=0;
  if ((radius<height) && (radius<length))
  {
    mood=-1;
  }
  else if ((height<length) && (height<radius))
  {
    mood=0;
  }
  else if ((length<height) && (length<radius))
  {
    mood=1;
  }
  return mood;
}

void output(float radius, float height, float length, int mood)
{
  if (mood==-1)
  {
    printf("The Camel is Sick\n");
  }
  else if (mood==0)
  {
    printf("The Camel is Happy\n");
  }
  else if (mood==1)
  {
    printf("The Camel is Tense\n");
  }
}

