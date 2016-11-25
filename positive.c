/*
Student name: Mikma bhote
Subject: Computer fundamentals
Roll no:23
Program : Write a c program to print arithmetic operation.
Lab Sheet No:03
Date: November,2016,20
*/
#include<stdio.h>
int main(){
int n;
printf("Enter the number is:\n");
scanf("%d",&n);
if(n>0)
{
    printf("no positive number:\n");

}
else if(n<0)
{
printf("no negative number:\n");
}

else
{
printf("no zero:\n");
}
return 0;
}
