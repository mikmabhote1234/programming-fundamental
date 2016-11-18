/*
student name : Mikma bhote
subject name : Programming fundamental
roll no : 08
lab sheet no : 3
program : write a C program to print the simple interest
date : 17 november 2017
*/
# include <stdio.h>
# include <conio.h>
int main ()
{
float P,T,R,I;
printf("Enter the principle\n");
scanf("%f",&P);
printf("Enter the time\n");
scanf("%f",&T);
printf("Enter the rate\n");
scanf("%f",&R);
I= (P*T*R)/100;
printf("The simple interest is:%f",I);
getch();
return (0);
}
