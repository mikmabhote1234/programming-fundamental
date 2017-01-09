/*
Name: Mikma bhote
Subject: Programming fundamentals
roll no: 17
lab sheet: 16
Date: January 09,2017
Program: WAP to check the given character is alphabet or not using ternary operator.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int ASCII;
char a;
printf("enter a character\n");
scanf("%c",&a);
ASCII=a;
(ASCII>=65 && ASCII<=90)?printf("the number is alphabet"):(ASCII>=97 && ASCII<=122)?printf("the number is alphabet"):printf("the number is not alphabet");
getch();
return 0;
}
