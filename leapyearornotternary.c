/*
Name: Mikma bhote
Subject: Programming fundamentals
roll no: 17
lab sheet: 16
Date: January 09,2017
Program: WAP to check the given year is leap year or not using ternary operator.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter the year\n");
scanf("%d",&a);
(a%4==0 && a%100!=0)?printf("IT IS A LEAP YEAR"):(a%400==0)?printf("IT IS A LEAP YEAR"):printf("IT IS NOT A LEAP YEAR");
getch();
return 0;
}
