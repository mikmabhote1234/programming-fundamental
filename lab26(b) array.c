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
	int num[10],i;
	for(i=0;i<10;i++)
	{
     printf("Enter the number:\n");
     scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("num[%d] contain%d data \n",i,num[i]);
	}
	return 0;
}
