/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to declare and print multidimensional array,ask from the user..
        a.5*2 matix
Date:3 Feb 2017
*/
# include<stdio.h>
int main()
{
	int array[5][2],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("enter the number\n");
		scanf("%d",&array[i][j]);
	}
}
		for(i=0;i<5;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

