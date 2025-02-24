#include <stdio.h>
int main()
{
	int n, m, rev=0;
	scanf("%d",&n);
	m=n;
	while (n!=0)
	{
	 rev=(rev*10)+(n%10);
	 n=n/10;
    } 
    if(m==rev)
	printf("palindrome");	
	else
	printf("not palindrome");
	return 0;
}
