/*
student name: Mikma bhote
subject name:Programming Fundamental
roll no:23
Lab sheet no: 26
program: WAP to create a structure, assign value to it and display the value....
Date:3 Feb 2017
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
	printf("mikma_id =%d\n",mikma.student_id);
	printf("mikma registration id=%d\n",mikma.registration_id);
	printf("mikma fee=%f\n",mikma.fee);

struct student
{
	int student_id;
	int registration_id;
	float fee;
};
     struct student manish;
     manish.student_id=100;
     manish.registration_id=1005;
     manish.fee=1000214554.12;
     printf("manish_id=%d\n",manish.student_id);
     printf("manish registration id=%d\n",manish.registration_id);
     printf("manish fee=%f\n",manish.fee);
	return 0;
}
