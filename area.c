/*
student name : Mikma bhote
subject name : Programming fundamental
roll no : 08
lab sheet no : 03
program : write a c program to calculate area and circumference of circle having radius should given from users
date : 17 November 2016
*/
# include<stdio.h>
# include<conio.h>
# define PI 3.14
int main (){
 float R,A,C;
 printf("Enter the radius:\n");
 scanf("%f",&R);
 A=PI* pow(R,2);
 C=2*PI*R;
 printf("The area of circle is:%f\n",A);
 printf("The cirum of circle is:%f\n",C);
 getch();
 return 0;
}

