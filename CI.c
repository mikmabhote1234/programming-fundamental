/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print arithmetic operation.
Lab Sheet No:03
Date: November,2016,20
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float P,T,R,E,CI;
    printf("Enter the principle:\n");
    scanf("%f",&P);
    printf("Enter the time:\n");
    scanf("%f",&T);
    printf("Enter the rate:\n");
    scanf("%f",&R);
    E=(100+R)/100;
    CI=P*pow(E,T)-1;
    printf("The value of compound interest is:%f\n",CI);
    getch();
    return 0;
}
