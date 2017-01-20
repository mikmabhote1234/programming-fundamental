/*
 student name:Mikma bhote
 subject name:Programming Fundamental
 roll no:23
 lab sheet no:21
 program:WAP to print fibonacci series upto 'n' terms
 Data:20 Jan 2017
 */
 #include<stdio.h>
 int main()
 {
   int a=1,b=1,c;
   printf("%d\t%d\t",a,b);
for(c=1;c<=10;c++)
   {
	   c=a+b;
     printf("%d\t",c);
     a=b;
     b=c;
     }
   return 0;
}
