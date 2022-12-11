#include<stdio.h>

void main()

{
	int a,b,c;
	
	printf("\nenter a :");
	scanf("%D",&a);
	printf("\nenter b :");
	scanf("%d",&b);
	printf("\nenter c :");
	scanf("%D",&c);
	printf("\n a=%d, b=%d, c=%d",a,b,c);
	
	if(a<b)
	{
	 if(a<c)
	 {
	 	printf("\n%d is lessthan",a);
	 }
	 else
	 {
	   printf("\n%D is lessthan",c);	
	 }
	}
	else
   { 
	if(b<c)
	{
		printf("\n%d is lessthan",b);
    }
    else
    {
    	printf("\n%d is lessthan",c);
	}
   } 
	
}