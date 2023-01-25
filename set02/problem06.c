#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char string[100],rev_str[100];
  input_string(&a);
  str_reverse(string,rev_str);
  output(a,reverse_a);
  return 0;
}
void input_string(char *a)
{
  printf("enter a string");
  scanf("%s",&a);
  return a;
}
void str_reverse(char *str, char *rev_str)
{
  int i,j;
  for(i=0;str[i]!="\0",i++);
    {
    int l;
    l=i;
    }
  for(j=0;j<i;j++)
    {
      rev_str[j]=str(l-1);
      l=-1;
    }
  
}
void output(char *a, char *reverse_a){
  printf("the reverse string is - %s/n",reverse_a);
}

