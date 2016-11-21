/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print the area of trapezium
Lab Sheet No:03
Date: November,2016,20
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
float a,b,h,T;
printf("Enter the fist side:\n");
scanf("%f",&a);
printf("Enter the second side:\n",b);
scanf("%f",&b);
printf("Enter the height:\n",h);
scanf("%f",&h);
T=0.5*(a+b)*h;
printf("The area trapezium is:%f",T);
getch();
 return 0;
}
