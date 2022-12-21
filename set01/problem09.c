#include<stdio.h>
#include<math.h>
double input();
double squre root(double n);
void output(double n; double squre);

int main(){
  double n = input();
  double sq = squre_root(n);
  output(n,sq);
}

doublr input(){
  double a;
  printf("Enter a number");
  scanf("%lf", &a);
  return(a);
}

double squre_root(double n){
  double x;
  x = sqrt(n);
  return(x);
}

void output(double n, double sqrroot){
  printf("squre root of %.2lf is %.2lf",n,sqrroot);
}