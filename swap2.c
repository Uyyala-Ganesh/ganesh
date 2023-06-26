#include<stdio.h>
void main()
{
	int a=20,b=30,c;
	printf("abefore swap:\n");
	printf("a=%d",a);
	printf("b=%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap: \n");
	printf("a=%d",a);
	printf("b=%d",b);
}
