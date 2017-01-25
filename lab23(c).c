/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 23
 program: wap to enter two number and find minimum number between two number using function (function without argument and  return type)
Data:25 Jan 2017
*/
# include<stdio.h>
int minimum();
int main()
{
	int result;
	result = minimum();
	printf("the mimimum no is : %d",result);
	
	return 0;
}
int minimum()
{
	int a,b;
	printf("Enter the frist number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

