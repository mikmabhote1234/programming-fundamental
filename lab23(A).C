/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 23
 program: wap to enter two number and find the sum using function (function with no argument and no return type)
Data:25 Jan 2017
*/
# include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int a,b,sum;
	printf("Enter the frist number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	sum=a+b;
	printf("The sum of two number is:%d",sum);
}

