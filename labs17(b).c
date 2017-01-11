/*
student name:Mikma bhote
subject:Programming fundamental
roll no:23
lab sheet no:17
program:WAP to find the first and last digits of any number of 4 digits number
date:11 Jan 2017
*/#include<stdio.h>
int main()
{
    int a,i,l;
    printf("Enter 4 digit number:");
    scanf("%d",&a);
    l=a%10;
    printf("The last number is:%d\n",l);
    for(i=1;i<4;i++)
    {
        a=a/10;
    }
    printf("The first number is:%d",a);
    return(0);   
}
