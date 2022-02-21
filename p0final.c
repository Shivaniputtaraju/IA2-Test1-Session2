#include <stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height of the triangle:\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area = 0.5 * base * height;
}
void output(float base,float height,float area)
{
  printf("the areaof the triangle with the base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base,height;
  input(&base,&height);
  float area;
  find_area(base,height,&area);
  output(area,height,area);
  return 0;
}
