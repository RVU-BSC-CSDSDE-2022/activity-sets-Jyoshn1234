#include <stdio.h>
int input();
void  add(int a,int b,int *sum);
 void output(a,b,sum);
 
int main(){
int a, b, sum;
a=input();
b=input();
add (a,b,&sum);
output(a,b,sum);
}
 
int input (){
int x; 
printf("enter a number\n");
scanf("%d",&x);
return(x);
}
void add (int a, int b,int *sum){
*sum = a+b;
}
void output(int a, int b, int sum){
printf("sum of %d and %d is %d ",a, b,sum);
}
