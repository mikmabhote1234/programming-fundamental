/*
student name:Mikma bhote
subject name:Programming Fundamental
roll no:23
lab sheet no:19
program: wap to display the pattern in this formate where the number of row is insert from the user.
          1
          12
          123
          1234
          12345
data: 16 Jan 2017
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("enter the number of rows\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
	 for (j=1;j<=i;j++)
	 {
		 printf("%d",j);
	 }
	 printf("\n");
 }
 return 0;
}
