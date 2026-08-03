#include<stdio.h>
struct student{
	int i;
	float f;
	char ch;
};
union uni
{
	int i;
	float f;
	char ch;
};
int main()
{
	printf("Size of struct:%zu\n",sizeof(struct student));
	printf("Size of union:%zu\n",sizeof(union uni));
	return 0;
}