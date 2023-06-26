#include<stdio.h>
#include<string.h>
	struct dob
	{
		int day,mm,yy;
	}d;
	struct student
	{
		int id;
		char name;
		struct dob d;
	}s;
	int main()
	{
		struct student s;
		printf("\n Enter an student id:");
		scanf("%d",&s.id);
		printf("\n enter an student name:");
		scanf("%s", &s.name);
		printf("\n enter an date of birth:");
		scanf("%d,%d,%d",&s.d.day,&s.d.mm,&s.d.yy);
		printf("student deatiles are..............\n");
		printf("\n stuudent id=%d",s.id);
		printf("\nstudent name =%c",s.name);
		printf("\nstudent date of birth =%d,%d,%d",s.d.day,s.d.mm,s.d.yy);
		return 0;
	}
