/*
student name:Mikma bhote
subject name:Programming Fundamental
roll no:19
lab sheet no:10
program:write a c program to check even or odd using Ternary operator
data:Dec/07/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the any number:\n");
    scanf("%d",&n);
    (n%2==0)? printf(" The number is Even"):printf("The number is Odd");
        getch();
        return 0;
}
