#include<stdio.h>
int main()
{
	int pin,correct_pin=409;
	float balance,amount;
	printf("Enter the pin:\n");
	scanf("%d",&pin);
	printf("Enter the account balance:\n");
	scanf("%f",&balance);
	printf("Enter the withdrawl amount:\n");
	scanf("%f",&amount);
	if(pin==409)
	{
		printf("The pin %d is correct",pin);
	}
	else if(balance>amount)
	{
		printf("%f is insufficient balance",balance);
	}
	else if((int)amount%100!=0)
	{
		printf("%f withdrawl amount is a multiple of 100",amount);
	}
	else
	{
	 printf("withdrawl sucessful\n");
	}
	return 0;