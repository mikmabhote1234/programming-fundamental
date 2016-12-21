/*
student name: Mikma bhote
subject name: Programming fundamental
lab sheet no: 14
roll no: 19
program: write a c program to check character assigned from a user vowel or not
data: Dec/21/2016
*/
#include<stdio.h>
int main()
{
char c;
printf("Enter the any character\n");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
	printf("%cThe letter is vowel",c);
}
else
{
	printf("%cThe letter is not a vowel",c);
}
return 0;
}


