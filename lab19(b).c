/*
student name:Mikma bhote
subject name:Programming Fundamental
roll no:23
lab sheet no:19
program: wap to display the patterns:
          *
          **
          ***
          ****
data: 16 Jan 2017
*/
#include<stdio.h>
int main()
{
 int i,j;
 for (i=1;i<=5;i++)
 {
	 for (j=1;j<=i;j++)
	 {
		 printf("*");
	 }
	 printf("\n");
 }
 return 0;
}         

