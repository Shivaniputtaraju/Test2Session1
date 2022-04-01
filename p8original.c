#include <stdio.h>
#include <math.h>
struct _point
{
 float x,y;
};
typedef struct _point point;
struct _line
{
 point p1,p2;
 float distance;
};
typedef struct _line line;
struct _polygon
{
 int n;
 line l[100];
 float peimeter;
};
typedef struct _polygon polygon;
line input_line()
{
  line l;
  printf("enter the coordinates of line:");
  scanf("%f %f",&1.p1.x,&1.p1.y);
  printf("enter the coordinates of line:");
  scanf("%f %f",&1.p2.x,&1.p2.y);
  return l;
}
void input_polygon(polygon *p)
{
  int i;
  printf("enter the no of sides\n");
  scanf("%d",&p->n);
  for(i=0;i<p->n;i++)
    {
      p->l[i]=input_line();
    }
}
float find_distance(point p1,point p2)
{
  return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
void find_length(line *1)
{
  1->distance=find_distance(1->p1,1->p2);
}
void find_perimeter(polygon *p)
{
  int i;
  p->perimeter=0;
  for(i=0;i<p->n;i++)
    {
      find_length(&p->l[i]);
      p->perimeter += p->l[i].distance;
    }
}
void output(polygon p)
{
  printf("the perimeter of polygon is %f \n",p.perimeter);
}
int main()
{
  polygon p;
  input_polygon(&P);
  find_perimeter(&p);
  output(p);
}