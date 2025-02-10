#include<stdio.h>
int main()
{
	float C1,C2,F1,F2;
	printf("Enter the value of Temperature in Centigrade scale");
	scanf("%d",&C1);
	printf("the value of temperature in fahrenheit scale is");
	printf("%f\n",F1=(C1*1.8)+32);
	printf("enter the value of temperature in fahrenheit scale");
	scanf("%f",&F2);
	printf("the value of temperature in centigrade scale is");
	printf("%f\n",C2=(F2-32)/1.8);
	return 0;
}
