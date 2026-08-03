#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no u want to insert:\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is a positive no",n);
	}
	else if(n<0)
	{
		printf("%d is a negative no",n);
	}
	else
	{
		printf("%d is zero",n);
	}
	return 0;
}