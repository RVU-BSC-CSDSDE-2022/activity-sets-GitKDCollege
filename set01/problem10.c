//            WITH FUNCTION DECLARATION
#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
  char string1[100], string2[100];
  int result=0;
  input_two_strings(string1, string2);
  result=stringcompare(string1, 
  string2);
  // printf("%d",result);
  output(string1, string2, result);
  return 0;
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}

int stringcompare(char *string1, char *string2)
{
  int i;
  int count1=0,count2=0;
  int result=0;
  for (i=0;(string1[i]!='\0' || string2[i]!='\0');i=i+1)
  {
  if (string1[i]>string2[i])
  {
      result=1;
      break;
  }
  else if(string2[i]>string1[i])
  {
      result=2;
      break;
  }
  }
  return result;
}
  
void output(char *string1, char *string2, int result)
{

   if(result==1)
   {printf("%s is greater\n", string1);}
   else if(result==2)
   {printf("%s is greater\n", string2);}
   else if (result==0)
   {printf("Strings are equal\n");}
}




//      WITHOUT FUNCTION DECLARATION
  // char string[100];
  // char string[100];
  // int i;
  // int count1;
  // count1=0;
  // int count2;
  // count2=0;
  // printf("Enter string-1\n");
  // scanf("%s",&s1);
  // printf("Enter string-2\n");
  // scanf("%s",&s2);
  // for (i=0;i<5;i=i+1)
  // {
  // if (s1[i]>s2[i])
  // {
  //   count1=count1+1;
  // }
  // else if(s2[i]>s1[i])
  // {
  //   count2=count2+1;
  // }
  // else if (s1[i]=s2[i])
  // {
    
  // }
  // }
  
  // if (count1>count2)
  // {
  //   printf("%s is greater than %s",s1,s2);
  // }
  // else if (count2>count1)
  // {
  //   printf("%s is greater than %s",s2,s1);
  // }
  // else if(count1=count2)
  // {
  //   printf("Both the strings are same");
  // }