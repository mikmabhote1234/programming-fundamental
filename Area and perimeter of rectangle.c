/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Programe : Write a c program to print the area and perimeter of rectangle
Lab Sheet No:03
Date: November,2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
int l,b,area,perimeter;
printf("Enter the length:\n");
scanf("%d",&l);
printf("Enter the breadth:\n");
scanf("%d",&b);
area=l*b;
perimeter=2*(l+b);
printf("The Area of rectangle is:%d\n",area);
printf("The perimeter of rectangle is:%d",perimeter);
getch();
return 0;}
