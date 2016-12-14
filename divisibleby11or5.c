/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:19
Lab sheet no:13
Program:write a c program to print swap two number using temporary variables(third variables)
Data:14 Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the first number:\n");
scanf("%d",&n);
if(n%5==0 && n%11==0)
{
    printf(" is divisible by 5 and 11\n");
}
else
{
    printf(" is not divisible by 5 and11");
}
getch();
return 0;
}
