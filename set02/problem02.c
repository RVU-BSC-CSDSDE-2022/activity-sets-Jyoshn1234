#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}


int input_side(){
int a;
printf("enter a side in cm");
scanf("%d",&a);
return a;
}
int check_scalene(int a, int b, int c){
int ans;
if(a!=b && b!=c && c!=a)
{
 ans=0;
  }
  else 
{
  ans=1;
}
  return ans;}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene ==0){
    printf("the triangle with side %d,%d and %d is scalene",a,b,c);
  }
  else{
    printf("Triangle is not scalene");
  }
}
