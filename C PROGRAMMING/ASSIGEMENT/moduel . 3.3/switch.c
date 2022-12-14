#include<stdio.h>

void main()
{
	int a,b,choice;
	
	printf("\nenter a & b :");
	scanf("%d%d",&a,&b);
	printf("\na=%d, b=%d",a,b);
	printf("\n press 1.addition \npress 2.subtraction \npress 3.multiplication \npress 4.division");
	printf("\nenter your choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
       	case 1:printf("\naddition :%d",(a+b));
	           break;
	    case 2:printf("\nsubtraction :%d",(a-b));
	           break;
	    case 3:printf("\nmultiplication :%d",(a*b));
	           break;
	    case 4:printf("\ndivision :%.2f",(a/(float)b));
	           break;
	    default:printf("\nInvalid Choice");
			   break;
     }
}