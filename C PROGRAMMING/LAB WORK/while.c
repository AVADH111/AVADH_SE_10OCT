#include<stdio.h>

void main()
{
	int i=100;
	
	while(i>=1)
	{
		printf("%d\t",i*i);
		i--;
	}
	printf("\nout of loop");
}