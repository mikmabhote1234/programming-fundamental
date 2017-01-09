/*
Name: Mikms bhote
Subject: Programming fundamentals
roll no: 17
lab sheet: 16
Date: January 09,2017
Program: WAP to check the given number is odd or even using ternary operator.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
(a%2==0)?printf("the number is even"):printf("the number is odd");
getch();
return 0;
}
