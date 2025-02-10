#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("the new value of b");
	a=a+b;
	printf("%d\n",b=a-b);
	printf("the new value of a");
	printf("%d\n",a=a-b);
	return 0;
}
