/*
student name:Mikma bhote
subject:Programming fundamental
roll no:23
lab sheet no:17
program:WAP a program to enter four digits number
        a.display the result by dividing the number by 10
        b.divide it by another asked number from the user
        c.display the reminder by dividing number by 10
date:11 Jan 2017
*/
#include<stdio.h>
int main()
{
    int a,div,b,di,d;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    div=a/10;
    printf("The dividend is :%d\n",div);
    printf("Enter the second number:");
    scanf("%d",&b);
    di=div/b;
    printf("The devidend is :%d\n",di);
    d=di%10;
    printf("The remainder is :%d",d);
    return(0);
}  
