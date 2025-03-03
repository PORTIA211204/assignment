#include<stdio.h>
int main()
{
	int rows=3;
	for(int i=1;i<=rows;i++)
	{
		for(int j=i;j<rows;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=rows-1;i>=1;i--)
	{
		for(int j=rows-1;j>=i;j--)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
