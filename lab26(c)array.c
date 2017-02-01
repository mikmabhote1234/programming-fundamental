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
	int num[10],n,sum=0;
	for(n=0;n<10;n++)
	{
		printf("enter the number\n");
		scanf("%d",&num[n]);
	}
	for(n=0;n<10;n++)
	{
		sum=sum+num[n];
	}
	    printf("The sum of number of array are:%d",sum);
	
	return 0;
}
