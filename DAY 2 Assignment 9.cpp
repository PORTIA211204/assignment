#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
c=a;
printf("the new value of a");
printf("%d\n",a=b);
printf("the new value of b");
printf("%d\n",b=c);
return 0;
}
