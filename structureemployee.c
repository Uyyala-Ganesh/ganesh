#include<stdio.h>
struct Employee
{
	int empno;
	char empname[20];
	float empsalary;
};
void main(){
	struct Employee e={10,"sri",30.00};
//	int =10;
//	char =30.00;
//	clrscr()
	printf("\n The size of the structure=%d",sizeof(e));
	printf("\n The size of the structure =%d",sizeof(struct Employee));
	printf("\n\n employee name=%d",e.empno);
	printf("\n\n employee salary=%s",e.empname);
	printf("\n\n employee salary=%f",e.empsalary);
	}
