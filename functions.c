#include<stdio.h>
void main()
{
	fun();
	fun();
	fun();
}
int fun(void){
	int a=10;
	printf("%d\n",a);
	a++;
	}
