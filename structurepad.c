#include<stdio.h>
struct student
{
	int roll;
	char name;
	float marks;
};
int main()
{
	struct student s1;
	s1.roll=10;
	s1.name="ganesh";
	s1.marks=100.0;
	printf("%d,%c,%f",&s1.roll,&s1.name,&s1.marks);
}


