/*
student name:Mikma bhote
subject : programming fundamental
roll no : 08
lab sheet no : 02
program : write a c program to print product,and sum of three number, asked from user
date : 16 november 2016
*/
#include <stdio.h>
#include <conio.h>
int main (){
float a,b,c,sum,product;
printf("Enter the frist number\n");
scanf("%f",&a);
printf("Enter the second number\n");
scanf("%f",&b);
printf("Enter the third number\n");
scanf("%f",&c);
sum=a+b+c;
product=a*b*c;
printf("sum of the three number is:%f\n",sum);
printf("product of three number is:%f\n",product);
getch();
return 0;
}


