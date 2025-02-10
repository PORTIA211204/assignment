#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,A,CI;
	printf("Enter the value of Principal");
	scanf("%f",&P);
	printf("Enter Time");
	scanf("%f",&T);
	printf("Enter Rate");
	scanf("%f",&R);
	A=P*(pow((1+R/100),T));
	printf("the value of Compound Interest is");
	printf("%f",CI=A-P);
	return 0;
}
