#include<stdio.h>
#include<string.h>
struct ganesh
{
	int ganesh_no;
	char ganesh_name[50];
	float ganesh_marks;
};
void main()
{
	struct ganesh g = { 64,"Ganesh",100.00};
	printf("the size of structure is=%ld",sizeof(g));
	printf("\nthes size of structure is =%ld",sizeof(struct ganesh));
	printf("\n\nthe ganesh_no=%d",g.ganesh_no);
	printf("\nthe ganes_name=%s",g.ganesh_name);
	printf("\nthe ganesh_marks=%f",g.ganesh_marks);
}

