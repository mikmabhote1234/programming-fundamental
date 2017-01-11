/*
student name:Mikma bhote
subject:Programming fundamental
roll no:23
lab sheet no:17
program:WAP to count number of digits of any number using for, while, and do while
date:11 Jan 2017
*/
#include<stdio.h>
int main()
{
	int i,count=1;
	printf("enter the number\n");
	scanf("%d",&i);
	while (i>=10)
	{
		i=i/10;
		count=count+1;
	}
	printf("the total number of digits are:%d",count);
	return 0;
}
