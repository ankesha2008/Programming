#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two nos:\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap%d=a\n",a);
	printf("after swap%d=b\n",b);
	return 0;
}