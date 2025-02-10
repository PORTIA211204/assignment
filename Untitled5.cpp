#include<stdio.h>
int  main()
{
	char  a;
	printf("enter H or T\n  ");
	scanf("%c",&a);
	if(a=='H')
		printf("it is head");
		else if (a=='T')
		printf("it is a tail");
		return 0;
}
