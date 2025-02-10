#include<stdio.h>
int main()
{
	int x;
	printf("enter the year ");
	scanf("%d",&x);
	if(x%400==0)
	{
	printf("it is a leap year");
}
	else if (x%100==0)
	{
	printf("it is not a leap year");
}
	else if(x%4==0)
	printf("it is a leap year");
	else 
	printf("it is not a leap year");
return 0;
}
