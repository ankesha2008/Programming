#include<stdio.h>
int main()
{
	int ch;
	float a,b;
	printf("1.Addition\n");
	printf("2.substraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("Enter a choice:\n");
	scanf("%d",&ch);
	printf("Entr two nos:\n");
	scanf("%f%f",&a,&b);
	switch(ch)
	{
		case 1:
			printf("Result=%2f",a+b);
			break;
		case 2:
			printf("Result=%2f",a-b);
			break;
		case 3:
			printf("Result=%2f",a*b);
			break;
		case 4:
			printf("Result=%2f",a/b);
			break;
		default:
		printf("out of choice");
	}
	return 0;
}

//6.VOTE ELEIGIBILITY
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the person's age:\n");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("they %d are eligible for vote",n);
	}
	else
	{
		printf("they %d are not eligible for vote",n);
	}
	return 0;
}
