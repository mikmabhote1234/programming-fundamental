/*
student name:Mikma bhote
subject name:Programming Fundamental
roll no:19
lab sheet no:10
program:write a c program to check number is odd or even
data:Dec 7 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number is:\n");
    scanf("%d",&n);
    if(n>=80)
    {
        printf("Distinction");

    }
   else if(n>=60&& n<80)
    {
        printf("First Division\n");
    }
   else if(n>=50&& n<60 )
    {
        printf("Second Division\n");
    }
   else if(n>40)
    {
        printf("You are Failed\n");
    }
    getch();
    return 0;
}
