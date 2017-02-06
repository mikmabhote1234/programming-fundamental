/*
Student name:Mikma Bhote
Subject name:Programming fundamental
roll no:23
lab sheet No:27
progarm:WAP to print or create structure, assign value from the user
Date:6 Fab 2017
*/
# include<stdio.h>
struct student
{
	int student_id;
	int registration_id;
	float fee;
};
int main()
{
	struct student mikma;
	mikma.student_id=102;
	mikma.registration_id=1004;
	mikma.fee=1400000.20;
	printf("1...mikma_id =%d\n",mikma.student_id);
	printf("mikma registration id=%d\n",mikma.registration_id);
	printf("mikma fee=%f\n",mikma.fee);

	struct student
	{
	int student_id;
	int registration_id;
	float fee;
    };
    struct student change;
	   change.student_id=100;
	   change.registration_id=1003;
	   change.fee=1400000.110;
	    printf("2...change id =%d\n",change.student_id);
	    printf("change registration id=%d\n",change.registration_id);
	    printf("change fee=%f\n",change.fee);
	return 0;
} 
