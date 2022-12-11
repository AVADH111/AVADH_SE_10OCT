#include<stdio.h>
void main()
{
	int rno,s1,s2,s3,total;
	char name[20];
	float per;
	
	printf("\n enter roll no :");
	scanf("%d",&rno);
	printf(" enter name :");
	scanf("%s",&name);
	printf("enter english marks:");
	scanf("%d",&s1);
	printf("enter maths marks:");
	scanf("%d",&s2);
	printf("enter science marks:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=(float)total/3;
	printf("\n total e.m.s marks :%d",total);
	printf("\n percentage :%.2f ",per);
	
	if(per>75)
	{
		printf("\ngread is:distriction");
	}
	else if(per>60)
	{
		printf("\ngread is :a");
	}
	else if(per>50)
	{
		printf("\ngread is :b");
	}
	else if(per>40)
	{
		printf("\ngread is :c");
	}
	else
	{
		printf("\nfail!");
	}
	 
}