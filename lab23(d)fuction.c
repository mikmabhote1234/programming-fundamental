/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 23
 program: wap to enter two number and find the sum using function (function with no argument and no return type)
Data:25 Jan 2017
*/
# include<stdio.h>
int check(int f);
int main()
{
	int n,result;
	printf("Enter the any number\n");
	scanf("%d",&n);
	result=check(n);
	if(result==0)
	{
		printf("%d is even number\n",n);
	}
	else
	{
		printf("%d is odd number\n",n);}
	return 0;
}
int check(int f){
if(f%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


