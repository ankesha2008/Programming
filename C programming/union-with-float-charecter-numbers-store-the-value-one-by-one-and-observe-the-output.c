#include<stdio.h>
union Data
{
	int i;
	float f;
	char c;
};
int main()
{
	union Data u;
	printf("Enter an integer:\n");
	scanf("%d",&u.i);
	printf("integer=%d\n",u.i);
	
	printf("Enter a float:\n");
	scanf("%.f",&u.f);
	printf("float=%.2f\n",u.f);
	
	printf("Enter a charecter:\n");
	scanf(" %c",&u.c);
	printf("charecter=%c\n",u.c);
	
    printf("\nDisplay all member:\n");
    printf("integer=%d\n",u.i);
	printf("float=%.2f\n",u.f);
	printf("charecter=%c\n",u.c);
	return 0;
}