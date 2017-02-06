/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to create a structure with three float number and call the structure in function and multiply float value and display the result passing structure as arugments...
Date:3 Feb 2017
*/
# include<stdio.h>
struct multiplication
{
	float a;
	float b;
	float c;
};
void multiply(float x,float y,float z);
int main()
{
	struct multiplication mult;
	printf("Enter a number:\n");
	scanf("%f",&mult.a);
	printf("Enter another number:\n");
	scanf("%f",&mult.b);
	printf("Enter the third number:\n");
	scanf("%f",&mult.c);
	multiply(mult.a,mult.b,mult.c);
	return 0;
}
void multiply(float x,float y,float z)
{
	float result;
	result=x*y*z;
	printf("The multiplication result is%f",result);
}
	

