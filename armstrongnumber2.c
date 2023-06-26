#include<stdio.h>
void main()
{
	int n,arm=0,temp,r;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if(arm==temp)
	{
		printf("it is a armstrong number");
	}
	else
	{
		printf("it is not a armstrong number");
	}
}
