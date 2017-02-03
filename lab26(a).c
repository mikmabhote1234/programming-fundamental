/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to declare and print multidimensional array.
         a.2*2
Date:3 Feb 2017
*/
# include<stdio.h>
int main()
{
	int array[2][2] = {{1,2},{3,4}},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
