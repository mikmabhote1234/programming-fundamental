/*
student name:Mikma bhote
subject : programming fundamental
roll no : 08
lab sheet no : 02
program : write a c program to print area of triangle;base and height are asked from users
date : 16 november 2016
*/
#include <stdio.h>
#include <conio.h>
int main (){
float b,h , area;
printf("Enter base of triangle\n");
scanf("%f",&b);
printf("Enter height of triangle\n");
scanf("%f",&h);
area =0.5*b*h;
printf("area of triangle is:%f",area);
getch();
return 0;
}


