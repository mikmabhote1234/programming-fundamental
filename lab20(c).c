#include<stdio.h>
#include<math.h>
#define PI 3.14
void diameter(d);
void circumference(c);
void area (a);

int main()
{
    int r;
printf("Enter radius of circle\n");
scanf("%d",&r);
diameter(r);
circumference(r);
area(r);
return 0;

}
void diameter(int f)
{
    int diameter;
    diameter=f/2;
   printf("The diameter of circle is:%d\n",diameter);
}
void circumference(int f)
{
    int circumference;
    circumference=2*PI*f;
    printf("The circumference of circle is:%d\n",circumference);

}
void area(int f)
{
    int area;
    area=2*PI*f*f;
    printf("The area of circle is:%d\n",area);

}

