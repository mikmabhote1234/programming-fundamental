/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to create a structure with two integer number and call the structure in main method and add both integer value and display the result
Date:3 Feb 2017
*/
# include<stdio.h>
struct addition 
{
	int a;
	int b;
};
int main()
{
	int result;
	struct addition add;
	printf("Enter a number:\n");
	scanf("%d",&add.a);
	printf("Enter another number:\n");
	scanf("%d",&add.b);
	result=add.a+add.b;
	printf("The sum of two number is:%d",result);
	return 0;
}
