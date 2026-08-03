#include<stdio.h>
int main()
{
	int n;
	int digit,reverse=0;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	printf("reverse is %d",reverse);
	return 0;
}
