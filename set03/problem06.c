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
  output(&string,&substring,index);
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
      if ((string[i]==substring[0])&&(string[i+strlen(substring)-1]==substring[strlen(substring)-1]))
        {
          index=i;
          break;
        }
      else{index=-1;}
    }
  return index;
}

void output(char *string, char *substring, int index)
{
  if (index==-1)
  {
    printf("Entered Sub-String '%s' not found in the Main String '%s'\n",substring,string);
  }
  else
  {
    printf("The Index of '%s' in '%s' is %d\n",substring,string,index);
  }
}