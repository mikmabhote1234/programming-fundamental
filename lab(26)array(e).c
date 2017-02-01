/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 26
 program: wap to read and print 5 element of an array.
 Data:1 Feb 2017
*/
#include<stdio.h>
int main()
{
	int num[10],i=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
	if(i%2==0)
		{
		printf("the number is even\n");
		}
		else
		{
			printf("the number is odd\n");
		}
	}
		return 0;
	}
	
