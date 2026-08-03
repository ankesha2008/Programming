#include<stdio.h>
int main()
{
	int n;
	printf("enter a value:\n");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}