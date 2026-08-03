#include<stdio.h>
int main()
{
int n;
printf("Enter a no u want to tested:\n");
scanf("%d",&n);
if(n%2==0)
{
	printf("it %d is a even no",n);
}
else
{
	printf("it %d is an odd no",n);
}
return 0;
}