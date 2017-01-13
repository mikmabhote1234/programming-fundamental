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
int i,b,sum=0;
printf("enter the 4 digits number\n");
scanf("%d",&i);
while (i!=0)
{
	b=i%10;
 i=i/10;
 sum=sum+b;
}
 printf("the sum of number is:%d",sum);
 return 0;
}
