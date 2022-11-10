#include<stdio.h>

void main()
{
	char name[15];
	int age;
	float salary;
	
	
	printf("enter your name:");
    //scanf("%s",&name);
    gets(name);
	printf("enter your age:");
	scanf("%d",&age);	
	printf("enter your salary:");
	scanf("%f",&salary);
	
	printf("\nname=%s\n",name);	
	printf("age=%d\n",age);
	printf("salary=%.f\n",salary);
	
}
















