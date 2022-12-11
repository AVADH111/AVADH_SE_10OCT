#include <stdio.h>

void main()

{
	int age;
	
	printf("\nenter age :");
	scanf("%D",&age);
	
	if(age<=18)
	{
		printf("\nyou are eligible ");
	}
	else
	{
		printf("\nyou are not eligible");
	}
}