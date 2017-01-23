/*
student name: Mikma Bhote
subject name: Programming fundamental
roll no: 23
lab sheet no: 22
program: WAP to check whether the entered number is prime or not
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0,i;
    printf("Enter the any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
    if(count==2)
    {
        printf("The number is prime");

    }
    else
    {
        printf("The number is not prime number");
    }
    getch();
    return 0;
}
