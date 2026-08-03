#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	printf("Enter the value of c:\n");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a %d is the greatest no among three",a);
	}
	else if(b>a && b>c)
	{
		printf("b %d is the greatst no among three",b);
	}
	else
	{
		printf("c %d is the grestest among three ",c);
	}
	return 0;
}