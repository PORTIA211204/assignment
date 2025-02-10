#include<stdio.h>
#include<math.h>
int main()
{
	float n,f,c;
	printf("enter the value of a number");
	scanf("%f",&n);
	f=floor(n);
	c=ceil(n);
	printf("the floor value of number is :%f",f);
	printf("the ceiling value of numberis :%f",c);
	return 0;
}
