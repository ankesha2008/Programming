#include<stdio.h>
int main()
{
	int marks,attendence,income;
	printf("Enter the marks:\n");
	scanf("%d",&marks);
	printf("Enter the attendence:\n");
	scanf("%d",&attendence);
	printf("Enter the family income:\n");
	scanf("%d",&income);
	if(marks>=75 && attendence>=80 && income<=300000)
	{
		printf("the student is eligible for the scholarship\n");
	}
	else
	{
		printf("the student is not eligible for the scholarship\n");
	}
	return 0;
}