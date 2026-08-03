#include<stdio.h>
int main()
{
	int n,first,second;
	printf("Enter two digit no:\n");
	scanf("%d",&n);
	first=n/10;
	second=n%10;
	if((first+second)==(first*second))
	{
	printf("it is a special no\n");
    }
    else
    {
    	printf("it is not a special no\n");
	}
	return 0;
}