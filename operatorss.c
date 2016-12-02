/*
student name:Mikma bhota
subject name:Programming Fundamental
roll no:19
lab sheet no:09
program: write a c program to demonstration the working of increment and decrement operator
data:2 Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("The post increment is:%d\n",a++);
    printf("The pre increment is:%d\n",++a);
    printf("The post decrement is:%d\n",a--);
    printf("The pre decrement is:%d\n",--a);
    getch();
    return 0;

}
