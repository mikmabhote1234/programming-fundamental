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
int main(){
   int a,b,add,sub,multi,divi,mod;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    divi=a/b;
    mod=(a%b);
    printf("The sum of the number is:%d\n",add);
    printf("The subtraction of the number is:%d\n",sub);
    printf("the multiply of the number is:%d\n",multi);
    printf("the division of the number is:%d\n",divi);
    printf("the modulus of the number is:%d\n",mod);
    getch();
    return 0;
}
