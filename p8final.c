#include <stdio.h>
typedef struct _triangle
{
  float base, altitude, area;
} Triangle;
int input_n()
{
  int n;
  printf("how many triangles will you enter\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base, altitude of a triangle\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void input_n_tringles(int n,Triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=1;i<n;i++)
    {
      if (small.area > t[i].area)
      {
        small=t[i];
      }
    }
  return small;
}
void output(int n,Triangle t[n],Triangle smallest)
{
  for(int i=0;i<n-1;i++)
    {
      printf("%f.%f\n is \n triangle with base = %f and altitude = %f having area = %f\n",t[n-1].base,t[n-1].altitude,smallest.base ,smallest.altitude, smallest.area);
      }
}
int main()
{
  int count = input_n();
  Triangle tris[count];
  input_n_tringles(count, tris);
  find_areas_n(count, tris);
  Triangle small = find_smallest_triangle(count, tris);
  output(count, tris, small);
  return 0;
}