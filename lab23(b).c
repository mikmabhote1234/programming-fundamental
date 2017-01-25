/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 23
 program: wap to enter two number and find the area of circle using function (function with argument and no return type)
Data:25 Jan 2017
*/
# include<stdio.h>
void area (int u);
int main()
{
	int r;
	printf("Enter the radius of circle\n");
	scanf("%d",&r);
	area(r);
	return 0;
}
void area(int u)
{
	int area;
	area=3.14*u*u;
	printf("the area of circle is:%d",area);
}
