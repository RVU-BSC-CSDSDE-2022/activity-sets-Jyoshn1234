#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter a base\n");
    scanf("%f",&t.base);
  printf("enter a altitude\n");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=(t->base)*(t->altitude)*(0.5);
}
void output(Triangle t)
{
  printf("the area is %f",t.area);
}
