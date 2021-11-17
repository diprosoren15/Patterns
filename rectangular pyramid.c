#include <stdio.h>
 int main()
{
	printf("Enter length and breadth of a rectangle");
	int l=0,b=0;
	scanf("%d%d",&l,&b);
	int i,j;
	for(i=0;i<l;i++)
	{
	   for(j=1;j<=b;j++)
	   {
	   	printf("*");
	   	
	   }
	   printf("\n");
	}
}
