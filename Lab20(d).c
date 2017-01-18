#include<stdio.h>
void area (a);
int main()
{
  int l,b;
  printf("Enter the length of rectangle\n");
  scanf("%d",&l);
  printf("enter the breadth of rectangle\n");
  scanf("%d",&b);
  area(l,b);
  return 0;
}
void area(d,e)
{
    int area;
    area=d*e;
    printf("the area of rectangle is:%d",area);
}

