#include<stdio.h>
int main()
{
int year;
printf("Enter the year:\n");
scanf("%d",&year);
if (year%4==0 && year%100!=0||year%400==0)
{
	printf("%d is the leapyear",year);
}
else
{
	printf("%d is not the leapyear",year);
}
return 0;
}