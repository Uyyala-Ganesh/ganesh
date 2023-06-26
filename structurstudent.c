#include<stdio.h>
#include<string.h>
struct student
{
	int studentno;
	char studentname[50];
	float studentmarks;
};
void main()
{
struct student s ={10,"ganee",40.00};
printf("the size of the structure =%d",sizeof(s));
printf("the size of the structure=%d",sizeof(struct student));
//printf("student detailes=%d");
printf("\nstudentno=%d",s.studentno);
printf("\n\nstudentname=%s",s.studentname);
printf("\n\n student marks =%f",s.studentmarks);
}
