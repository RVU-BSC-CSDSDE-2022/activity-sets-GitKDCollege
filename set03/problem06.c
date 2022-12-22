#include<stdio.h>
#include<string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
  int index;
  char string[100],substring[100];
  input_string(&string,&substring);
  index=sub_str_index(&string,&substring);
  printf("%d",index);
  return 0;
}

void input_string(char *a, char *b)
{
  printf("Enter the Main String\n");
  scanf("%s",a);
  printf("Enter the String whose Index you want to find\n");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
  int index;
  int i,j;
  for (i=0;i<strlen(string);i++)
    {
      if ((string[i]==substring[0]))
        {
          index=i;
          // break;
        }
    }
  // for (i=0;i<strlen(string);i++)
    // {
    //   for (j=0;j<strlen(substring);j++)
    //     {
    //       // printf("%d %d\n",i,j);
    //       if (string[j]==substring[i])
    //       {
    //         index=i;
    //         printf("%d\n",index);
    //       }
    //     }
    // }
  return index;
}