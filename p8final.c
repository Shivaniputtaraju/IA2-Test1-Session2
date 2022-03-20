#include <stdio.h>
typedef struct_triangle;
{
  float base, altitude, area;
} triangle;
int input_n()
{
  int n;
  printf("how many triangles will you enter\n");
  scanf("%d",&n);
  return n;
}
triangle input_triangle()
{
  triangle t;
  printf("enter the base, altitude of a triangle\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void input_n_tringles(int n,triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas(int n,triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
triangle find_smallest_triangle(int n,triangle t[n])
{
  triangle small;
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
void output(int n,trinagle t[n],triangle smallest)
{
  for(int i=0;i<n-1;i++)
    {
      printf("%f.%f\n is \n triangle with base =%f and altitude =%f having area =%f\n",t[n-1].base,t[n-1].altitude,smallest.base ,smallest.altitude, smallest.area);
      }
}
int main()
{
  int count = input_n();
  triangle tris[count];
  input_n_triangle(count, tris);
  find_areas(count, tris);
  triangle small = find_smallest_triangle(count, tris);
  output(count, tris, small);
  return 0;
}