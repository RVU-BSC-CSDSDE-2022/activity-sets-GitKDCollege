//      WITH FUNCTION DECLARATIONS



#include<stdio.h>

void input(float base, float height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

void input(float base, float height)
{
  float area;
  printf("Enter the Base of the Triangle\n");
  scanf("%f",&base);
  printf("Enter the Height of the Triangle\n");
  scanf("%f",&height);
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base, float height, float *area)
{
  *area=base * height * 0.5;
}

void output(float base, float height, float area)
{
  printf("The Area of the Triangle with Base %.2f and Height %.2f is %.2f\n",base,height,area);
}

int main(void)
{
  float base, height;
  input(base,height);
  return 0;
}


//        WITHOUT FUNCTION DECLARATION


// #include<stdio.h>

// void input(float *base, float *height)
// {
//   printf("Enter Base of the Triangle\n");
//   scanf("%f",base);
//   printf("Enter Height of the Triangle\n");
//   scanf("%f",height);
// }

// void find_area(float base, float height, float *area)
// {
//   *area=(0.5)*(base)*(height);
// }

// void output(float base, float height, float area)
// {
//   printf("The Area of the Triangle with Base %.2f and Height %.2f is %.2f",base,height,area);
// }

// int main(void)
// {
//   float base, height, area;
//   input(&base,&height);
//   // printf("%f",&base);
//   find_area(base,height,&area);
//   output(base,height,area);
//   return 0;
// }