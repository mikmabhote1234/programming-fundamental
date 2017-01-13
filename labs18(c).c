/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:23
lab sheet no:18
program:wap to enter the any number and print its reverse
data:13 Jan 2017
*/
#include<stdio.h>
int main()
{ 
	int i,rem;
	printf("enter the number\n");
	scanf("%d",&i);
	while (i>0)
	{
		rem=i%10;
		i=i/10;
	
		printf("%d",rem);
	}
	return 0;
}
