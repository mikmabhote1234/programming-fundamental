/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to declare and print multidimensional array.
         b.3*3
Date:3 Feb 2017
*/
# include<stdio.h>
int main()
{
	int array[3][3] = {{1,2,0},{3,4,6},{6,8,9}},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

