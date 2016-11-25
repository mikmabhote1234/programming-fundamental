/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print logical operator
Lab Sheet No:03
Date: November,2016,20
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,AND;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    AND=(a&&b);
    printf("the logical operator is:%d",AND);
    getch ();
    return 0;
}
