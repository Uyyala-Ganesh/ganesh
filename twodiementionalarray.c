#include<stdio.h>
int main()
{
	int math[2][3]={23,67,89,12,43,67};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",math[i][j]);
		}
		printf("\n");
	}
}
