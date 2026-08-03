#include<stdio.h>
int main()
{
	int n,temp,digit,sum=0;
	printf("Enter a no:\n");
	scanf("%d",&n);
	n=temp;
	while(n!=0)
	{
	digit=n%10;
	sum=sum+digit*digit*digit;
	n=n/10;
}
    if(sum==temp)
    {
    printf("it is an amstrong no");
    }
    else
    {
    	printf("it is not an amstrong no");
	}
    return 0;
}
