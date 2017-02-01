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
	int num[10],i,greater=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(greater<num[i])
		{
			greater=num[i];
		}
		
	}
	printf("The greater value is:%d",greater);
		return 0;
	}
	
