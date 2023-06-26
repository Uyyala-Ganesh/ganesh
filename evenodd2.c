#include<stdio.h>
void main()
{
	int a=20,b=50;
	printf("before swap:");
	printf("%d\n",a);
	printf("%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap:");
	printf("%d\n",a);
	printf("%d\n",b);
}
