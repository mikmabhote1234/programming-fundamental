/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print the area and volume of sphere
Lab Sheet No:03
Date: November,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
float r,area,volume;
printf("Enter the radius:\n",r);
scanf("%f",&r);
area=4*PI*pow(r,2);
volume=1.33*PI*pow(r,3);
printf("The area of sphere is:%f\n",area);
printf("The volume of sphere is:%f",volume);
getch();
return 0;}
