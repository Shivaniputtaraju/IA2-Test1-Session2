#include <stdio.h>
int input_side()
{
  int side;
  printf("enter a side of the triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isScalene)
{
  if(isScalene)
  {
    printf("the triangle with sides %d, %d and %d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d, %d and %d is not scalene\n",a,b,c);
  }
}
int main()
{
  int AB = input_side();
  int BC = input_side();
  int CA = input_side();
  int res = check_scalene(AB, BC, CA);
  output(AB, BC, CA, res);
  return 0;
}