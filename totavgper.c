/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to enter marks of 7 different subjects and calculate
Lab Sheet No:07
Date: November,2016,28
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e,f,g,total,average,percentage;
    printf("Enter the marks of Computer Architecture:\n");
    scanf("%f",&a);
    printf("Enter the marks of Programming Fundamental:\n");
    scanf("%f",&b);
    printf("Enter the marks of Discrete Mathematics:\n");
    scanf("%f",&c);
    printf("Enter the marks of Interactive Skills:\n");
    scanf("%f",&d);
    printf("Enter the marks of Software Engineering:\n");
    scanf("%f",&e);
    printf("Enter the marks of Algebra:\n");
    scanf("%f",&f);
    printf("Enter the marks of Organization Management:\n");
    scanf("%f",&g);
    total=a+b+c+d+e+f+g;
    average=total/7;
    percentage=(total*100)/700;
    printf("************************************************************\n");
    printf("The total is:%f\n",total);
    printf("************************************************************\n");
    printf("The average is:%f\n",average);
    printf("************************************************************\n");
    printf("The percentage is:%f\n",percentage);
    printf("************************************************************\n");
    getch();
    return 0;
}
