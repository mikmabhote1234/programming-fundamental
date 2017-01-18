#include<stdio.h>
#include<math.h>
void area();
int main(){

int r;
printf("Enter the radius\n");
scanf("%d",&r);
area(r);
}
void area(int f)
{

    int area;
    area=3.14*f*f;
    printf("The area of circle is:%d",area);
}
