/*
student name: Mikma bhote
subject name: Programming fundamental
lab sheet no: 14
roll no: 19
program: write a c program to check character assigned from a user is alphabet or not
data: Dec/21/2016
*/
#include<stdio.h>
int main()
{
	char c;
	int ascii;
	printf("Enter any character\n");
	scanf("%c",&c);
	ascii=c;
	if(ascii>=97 && ascii<=122||ascii>=65 && ascii<=90)
	{
		printf("\n%d is a Alphabet",ascii);
	}
	else
	{
		printf("\n%d is not a Alphabet",ascii);
	}
	return 0;
}
