/*
student name : Mikma Bhote
subject name : Programming fundamental
roll no : 19
lab sheet no : 15
program : write a c program to use meanu base program to print following statement
          1.to print the number odd or even
          3.to check assign character is vowel or consonant
          5.to check assigned number is divisible by 5 and 11
          6.   EXIT
data : 28 Dec 2016
*/
# include<stdio.h>
int main()
{
	char c;
   int n;
   printf("enter a character");
   scanf("%c", &c);
   
printf("**************MENU*******************\n");
printf("..............Choose any menu.............\n");
printf("1. odd or even\n ");
printf("2. vowel or consonant\n");
printf("3. 5 and 11\n");
printf("4. EXIT\n");
printf("choose any above number\n");
scanf("%d",&n);
switch(n){
	case 1:
		if(n%2==0)
		{
			printf("the number is even");
		}
			else
			{
				printf("the number is odd");
			}
		break;
	    case 2:
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
	       printf("%c\nThe letter is vowel",c);
        }
        else
        {
	       printf("%c\nThe letter is not a vowel",c);
        }
        break;
	    case 3:
		if(n%5==0 && n%11==0)
        {
            printf(" is divisible by 5 and 11\n");
        }
        else
        {
            printf(" is not divisible by 5 and11\n");
        }
		break;
		
        }
  
 return 0;
}
	

          
          
        
