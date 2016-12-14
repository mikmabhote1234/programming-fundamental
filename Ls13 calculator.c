/*
student name:Mikma bhote
subject name:Programming fundamental
roll no:19
Lab sheet no:13
Program:write a c program to print menu based program
Data:14 Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,mult,divi,n;
    printf("\t\t\t.......... Simple Calculator..............\n");
    printf("\t\t\t**********Click from the number***********\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.End\n");
    printf("Choose any number??:\n");
    scanf("%d",&n);
    switch(n){
    case 1:
            printf("Enter the first number");
            scanf("%d",&a);
            printf("Enter the Second number");
            scanf("%d",&b);
            sum=a+b;
            printf("The sum is:%d",sum);
            break;


            case 2:
                printf("Enter the first number");
            scanf("%d",&a);
            printf("Enter the Second number");
            scanf("%d",&b);
            sub=a-b;
            printf("The subtraction is:%d",sub);
                break;


            case 3:
                printf("Enter the first number");
            scanf("%d",&a);
            printf("Enter the Second number");
            scanf("%d",&b);
            mult=a*b;
            printf("The multiply is:%d",mult);
                break;
            case 4:
                printf("Enter the first number");
            scanf("%d",&a);
            printf("Enter the Second number");
            scanf("%d",&b);
            divi=a/b;
            printf("The division is:%d",divi);
            break;
            default:
                printf("***Thank you for visiting***");
    }
    getch();
    return 0;
}






