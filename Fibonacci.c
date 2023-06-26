/* Fibonacci series number are the numbers the following series integer sequence
 *   0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....
    Fn  = Fn-1 + Fn-2
     the series starts of with 0 and 1 , our aim is to build a seried of numbers with above equation like below
     for example 
     0,1 0+1=1,1+1=2,1+2=3, 3+2=5, 5+3=8, 8+5=13, 13+8=21
     input/output :
input:  n=9
output : you can guess */
//code
#include<stdio.h>
#include<stdlib.h>
int fib (int n)
{
	if (n==0) return -1;
	if(n==1) return 0;
	if(n==2) return 1;
	int a=0, b=1,c,i;
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()
{
	int n;
	printf("Enter N value : ");
	scanf("%d:",&n);
	int ans = fib(n);
	printf("Answer : %d\n",ans);
	return 0;
}

