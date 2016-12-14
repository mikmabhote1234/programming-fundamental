/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:19
Lab sheet no:13
Program:write a c program to print swap two number using temporary variables(third variables)
Data:14 Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);

    printf("Before the swap the value of a:%d\n",b);
    printf("Before the swap the value of b:%d\n",a);

    temp=a;
    a=b;
    b=temp;

    printf("After the swap the value of a:%d\n",a);
    printf("After the swap the value of b:%d\n",b);
    getch();
    return 0;
    }
