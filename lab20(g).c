/*
 student name:Mikma bhote
 subject name:Programming Fundamental
 roll no:23
 lab sheet no:21
 program:WAP to print such patten:
          * * * * *
            * * * *
              * * * 
                * *
                  *  
 Data:20 Jan 2017
 */
 #include<stdio.h>
 int main()
 {
	 int i,j;
	 for(i=5;i>=1;i--)
	 {
		 for(j=1;j<=5;j++)
		 {
	 
			 if(i>j)
			 {
				 printf(" ");
			 }
			 else
			 {
				 printf("*");
			 
			  }
		 
           }
         printf("\n");
	 }
         return 0;
         }
 
      

