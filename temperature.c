/*
student name : Mikma bhote
subject name : Programming fundamental
roll no :08
lab sheet no:03
program :write a c program to read the temperature in fahrenheat and convert it into centigrade
date :23 Nov.2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float F,C,E;
    printf("Enter the fahrenhit:\n");
    scanf("%f",&F);
    E=5*(F-32);
    C=E/9;
    printf("The temperature is:%f",C);
    getch();
    return 0;
}
