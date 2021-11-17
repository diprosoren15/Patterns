#include<stdio.h>
int main()
{
	int n=5;
	int i=0,j=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*n-(2*i-1));j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	}
