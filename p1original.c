#include<stdio.h>
#include<math.h>
void input(int *x1,int *y1,int *x2,int *y2)
{
  printf("enter the numerator and denominator of the fractions\n");
  scanf("%d%d%d%d",x1,y1,x2,y2);
}
int findgcd(int a,int b)
{
  int gcd=1;
  while(b!=0)
    {
      gcd=a%b;
      a=b;
      b=gcd;
    }
  return a;
}
void add(int x1, int y1, int x2, int y2, int *x3, int *y3)
{
  *x3=(x1*y1)+(x2*y2);
  *y3=y1*y2;
  int g = findgcd(*x3,*y3);
  *x3 /=g;
  *y3 /=g;
}
void output(int x1, int y1, int x2, int y2, int x3, int y3)
{
  printf("sum of %d %d and %d %d is %d %d\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
  int x1,y1,x2,y2,x3,y3;
  input(&x1,&y1,&x2,&y2);
  add(x1,y1,x2,y2,&x3,&y3);
  output(x1,y1,x2,y2,x3,y3);
  return 0;
}

