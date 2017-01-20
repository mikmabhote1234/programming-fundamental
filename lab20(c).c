/*
 student name:Mikma bhote
 subject name:Programming Fundamental
 roll no:23
 lab sheet no:21
 program:WAP to print the parallontom number
 Data:20 Jan 2017
 */
 #include<stdio.h>
 int main()
 {
	 int i,num,r,sum=0;
	printf("enter the number\n");
	scanf("%d",&i);
	for(i=1;i<=num;i++)
	{
		num=i;
		while (i>0)
		{
		r=i%10;
		sum=sum+(r*r*r);
		i/=10;
	}
return 0;
}

