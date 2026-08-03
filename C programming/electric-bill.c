#include<stdio.h>
int main()
{
	int n;
	int bill;
	printf("Enter the no of unit consumed:\n");
	scanf("%d",&n);
	if(n<=100)
	{
		bill=n*5;
		printf("total bill=%d",bill);
	}
	else if(n<=200)
	{
		bill=n*7;
		printf("total bill=%d",bill);
	}
	else
	{
		bill=n*10;
		printf("total bill=%d",bill);
	}
}