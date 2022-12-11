#include<stdio.h>

void main()

{
	int a;
	
	printf("\n enter a : ");
	scanf("%D",&a);
	
	if(a<0)
	{
		printf("\n %d is +ve",a);
	}
	else
	{
		printf("\n %d is -ve",a);
	}
}