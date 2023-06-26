#include<stdio.h>
#include<string.h>
	struct laptop;
	{
		int laptop_no;
		char laptop_name[];
		float laptop_price;
	}laptop;
void main(){
	struct laptop l;// = {1,"Apple",100000.00};
		l.laptop_no=1;
		l.laptop_name="Apple";
		l.laptop_price=100000.00;
		printf("%d",laptop_no);
		printf("%c",laptop_name);
		printf("%f",laptop_price);
	}
