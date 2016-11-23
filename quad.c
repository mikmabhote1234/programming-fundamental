/*
student name : Mikma bhote
subject name : Programming fundamental
roll no :08
lab sheet no:03
program :write a c program to find roots of quadratic equation and value are assigned from users
date :23 Nov.2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,x1,x2,dis;
printf("Enter the value of a:\n");
scanf("%f",&a);
printf("Enter the value of b:\n");
scanf("%f",&b);
printf("Enter the value of c:\n");
scanf("%f",&c);
dis=(b*b-(4*a*c));
x1=(-b+pow(dis,0.5))/(2*a);
printf("The value of x1 is :%f\n",x1);
x2=(-b-pow(dis,0.5))/(2*a);
printf("The value of x2 is:%f",x2);
getch();
return 0;
}
