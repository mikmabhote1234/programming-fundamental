/*
student name : Mikma bhote
subject name : Programming Fundamental
roll no : 08
lab sheet no : 08
program : write a c program to print the use assignment operator
data : 30 Nov 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    a+=b;
    printf("Using of a+=b is:%d\n",a);
    a-=b;
    printf("Using of a-=b is:%d\n",a);
    a*=b;
    printf("Using of a*=b is:%d\n",a);
    a/=b;
    printf("Using of a/=b is:%d\n",a);
    getch ();
    return 0;

}
