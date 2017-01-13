/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:23
lab sheet no:18
program:wap to calculate sum of digits of any number
data:13 Jan 2017
*/
#include<stdio.h>
int main()
{
	int a,i,mult=1;
	printf("enter the four digits number\n");
	scanf("%d",&a);
	while (a>0)
{
	i=a%10;
	a=a/10;
	mult=mult*i;

	}
		printf("the mult of digits are:%d",mult);
return 0;
}
