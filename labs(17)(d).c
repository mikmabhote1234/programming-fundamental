/*
	Student name: Mikma bhote
	Subject: Computer Fundamentals
	Roll no:
	Program : Write a program to check whether the number is pallindrome or not
	Lab Sheet No:15
	Date: 13th jan,2017
	*/
	#include<stdio.h>
	int main()
	{
	    int i,n,rem=0,rev=0;
	    printf("Enter the number\n");
	    scanf("%d",&i);
	    n=i;
	    do
	    {
	        rem=i%10;
	        rev=rev*10+rem;
	        i=i/10;
	    }
	    while(i>0);
	
	    if(n==rev)
	        {
	             printf("Number is pallindrome");
	
	    }
	    else
	        {
	            printf("Number is not pallindrome");
	    }
	    return 0;
	
	}
