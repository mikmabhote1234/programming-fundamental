/*
student name:Mikma bhote
subject name:Programming Fundamental
roll no:19
lab sheet no:1o
data:Dec.07.2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    if(a>=b&& a>=c)
    {
        printf("largest is:%d",a);
    }
    else if(b>=a&& b>=c)
    {
        printf("largest is:%d",b);
    }
    else
    {
        printf("largest is:%d",c);
    }
    getch();
    return 0;
}


