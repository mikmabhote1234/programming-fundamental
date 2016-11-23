/*
student name : Mikma bhote
subject name : Programming fundamental
roll no :08
lab sheet no:03
program :write a c program to find ASCII value of any character assigned from users.
date :24 Nov.2016
*/
#include<stdio.h>
int main(){
    char character;
    int asciivalue;
    printf("Enter the character:\n");
    scanf("%c",&character);
    asciivalue=character;
    printf("The value of ASCII is:%d",asciivalue);
    getch();
    return 0;
}

