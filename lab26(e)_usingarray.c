/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to add two matrices [2*2],ask input from user..
Date:3 Feb 2017
*/
# include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element for frist matrix number\n:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element for second matrix number\n:");
			scanf("%d",&b[i][j]);
		}
	}
     for(i=0;i<2;i++)
     {
		 for(j=0;j<2;j++)
		 {
			 c[i][j]=a[i][j]+b[i][j];
		 }
	 }
			 printf("The sum of matrices are\n");
		 
			 for(i=0;i<2;i++)
			 {
				 for(j=0;j<2;j++)
				 {
					 printf("%d\t",c[i][j]);
				 }
			 
				 printf("\n");
			 }
			 return 0;
		 }
