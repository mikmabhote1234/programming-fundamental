/*
 student name:Mikma bhote
 subject name:Programming Fundamental
 roll no:23
 lab sheet no:21
 program:WAP to print the reverse number
 Data:20 Jan 2017
 */
 #include<stdio.h>
 int main()
 {
	 int i,rem;
	printf("enter the number\n");
	scanf("%d",&i);
	while (i>=1)
	{
		rem=i%10;
		i=i/10;
		printf("%d",rem);
	}
return 0;
}
