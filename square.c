/*
student name :Mikma bhote
roll no : 08
lab sheet no : 07
program : write a c program to print a square
date :28 Nov 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,square;
printf("Enter the number:\n");
scanf("%d",&a);
square=pow(a,2);
printf("The square of the number is:%d",square);
getch();
return 0;
}
