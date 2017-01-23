/*
student name: Mikma Bhote
subject name: Programming fundamental
roll no: 23
lab sheet no: 22
program: WAP to print Armstrong number between 1 to 1000
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,num,r;
    for(i=1;i<=1000;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
            r=num%10;
            sum=sum+(r*r*r);
            num=num/10;
        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
getch();
return 0;
}
