#include<stdio.h>
struct student{
	char name[70];
	int roll;
	float marks;
	float total_marks;
};
void main()
{
	struct student s;
	printf("Enter the name of the student:\n");
	scanf("%s",&s.name);
	printf("Enter the roll:\n");
	scanf("%d",&s.roll);
	printf("Enter marks:\n");
	scanf("%f",&s.marks);
	printf("Enter total marks:\n");
	scanf("%f",&s.total_marks);
	printf("Student details:\n");
	printf("name of the student:%s\n",s.name);
	printf("roll no:%d\n",s.roll);
	printf("marks:%.2f\n",s.marks);
	printf("total_marks:%.2f\n",s.total_marks);
}