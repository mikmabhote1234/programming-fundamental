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
int main (){
 float R,area,cirum;
 printf("Enter the radius:\n");
 scanf("%f",&R);
 area=3.14*R*R;
 cirum=2*3.14*R;
 printf("The area of circle is:%f\n",area);
 printf("The cirum of circle is:%f\n",cirum);
 getch();
 return 0;
}

