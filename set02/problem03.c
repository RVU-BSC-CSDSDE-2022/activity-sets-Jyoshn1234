#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int a;
  printf("enter a number");
  scanf("%d",&a);
  return a;
}
int is_composite(int n){
  int i,ans,cnt;
  ans=0;
  cnt=0;
  
 for(i=1;i<n;i++) {
  if(n%i==0);
  cnt++;
}
 if(cnt>=2) {
  ans==0;
}
 else {
  ans==1;
  }
return (ans);
}

void output(int n, int result){
  if (result==0){
  printf("%d is a composite number\n",n);
}
  else{
  printf("%d is not a composite number\n",n);
  }
  }

