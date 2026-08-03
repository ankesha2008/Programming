#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a positive integer:\n");
	scanf("%d",&n);
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n!=0)
		{
			count++;
			n=n/10;
		}
		printf("digit no %d",count);
	}
	return 0;
}