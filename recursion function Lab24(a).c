/*
 Student name: Mikma bhote
 Subject name:Programming Fundemental
 roll no: 23
 lab sheet no: 23
 program: wap to find factorial of given number using recursion function.
 Data:29 Jan 2017
*/
#include<stdio.h>
int fact(int n);
int main()
{
int n,result;
printf("Enter any number:\n");
scanf("%d",&n);
result=fact(n);
printf("The factorial of given number is:%d\n",result);
return 0;
}
int fact(int n)
{
int factorial;
if(n==1)
return 1;
else
factorial=(n*fact(n-1));
return factorial;
}
