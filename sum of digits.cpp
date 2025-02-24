#include <stdio.h>
int main()
{
	int s,n;
	scanf("%d",&n);
	while (n!=0)
	{
	 s=s+(n%10);
	 n=n/10;
    } 
	printf("%d\t",s);	
	return 0;
}
