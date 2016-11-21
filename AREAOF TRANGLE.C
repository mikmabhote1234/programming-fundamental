/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print the area of triangle
Lab Sheet No:03
Date: November,2016,20
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
float a,b,c,S,Area,E;
printf("Enter the fist side:\n");
scanf("%f",&a);
printf("Enter the second side:\n",b);
scanf("%f",&b);
printf("Enter the third side:\n",c);
scanf("%f",&c);
S=(a+b+c)/2;
E=S*(S-a)*(S-b)*(S-c);
Area=pow(E,0.5);
printf("The area of triangle is:%f",Area);
getch();
 return 0;
 }
