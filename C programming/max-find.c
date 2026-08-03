#include<stdio.h>
int main()
{
    int a,b;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d a is the greatest among two elements",a);
	}
	else
	{
		printf("%d b is the greatest among two elements",b);
	}
	return 0;
}