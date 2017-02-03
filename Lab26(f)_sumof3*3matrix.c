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
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element for frist arrray:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element for second arrray:");
			scanf("%d",&b[i][j]);
		}
	}
     for(i=0;i<3;i++)
     {
		 for(j=0;j<3;j++)
		 {
			 c[i][j]=a[i][j]+b[i][j];
		 }
	 }
			 printf("The sum of matrices are\n");
		 
			 for(i=0;i<3;i++)
			 {
				 for(j=0;j<3;j++)
				 {
					 printf("%d\t",c[i][j]);
				 }
			 
				 printf("\n");
			 }
			 return 0;
		 }

