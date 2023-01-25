#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n;Triangle smallest;
  n=input_n();
  Triangle a;
  a=input_triangle();
  Triangle t[n];
  input_n_triangles(n,t);
  find_area(&t[n]);
  find_n_areas(n,t);
  smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

int input_n(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
  }
Triangle input_triangle(){
  Triangle a;
  printf("enter a base/n");
  scanf("%f",&a.base);
  printf("enter a altitude");
  scanf("%f",&a.altitude);
   return a;
}
void input_n_triangles(int n, Triangle t[n]){
  int i;
  for(i=0;i<n;i++){
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t){
  t->area=0.5*t->base*t->altitude;
}
void find_n_areas(int n, Triangle t[n]){
  int i;
  for(i=0;i<n;i++){
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
  int i;
  Triangle smallest;
  smallest=t[0];
  for(i=1;i<=n;i++){
    if(t[i].area<smallest.area)
      smallest=t[i];
    
  }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest){
  printf("the smallest triangle of triangles with base and altitude  ");
  for(int i=1;i<=n;i++){
```
  }
  printf("is the triangle having base, altitude and area is%f,%f,%f",smallest.base,smallest.altitude,smallest.area);
}