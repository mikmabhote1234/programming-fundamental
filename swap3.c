/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:19
lab sheet no:13
program:write a c program to swap two number using third variables
data:13
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

     printf("Before the swap the value of a:%d\n",a);
    printf("Before the swap the value of b:%d\n",b);

    a=a-b;
    b=a+b;
    a=b-a;


    printf("After the swap the value of a:%d\n",a);
    printf("After the swap the value of b:%d\n",b);
    getch();
    return 0;
    }
