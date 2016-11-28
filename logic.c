/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to
Lab Sheet No:07
Date: November,2016,28
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
if (a==b)
{
printf("The numbers are equal");
}
else if (a>b)
{
printf("The value of a is greater");
}
else if (a<b)
{
printf("The value of b is greater");
}
getch();
return(0);
}
