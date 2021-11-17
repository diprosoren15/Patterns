#include<stdio.h>
int main()
{
	printf("Enter the length :");
	int n=0;
	scanf("%d",&n);
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}
