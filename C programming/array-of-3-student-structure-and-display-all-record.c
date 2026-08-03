#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
};
void main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
	printf("student %d:\n",i+1);
     printf("Enter the name of the student:\n");
	 scanf("%s",&s[i].name);
	 printf("Enter the roll of student:\n");
	 scanf("%d",&s[i].roll);
	 printf("Enter marks:\n");
	 scanf("%f",&s[i].marks);
    }
    printf("\nstduent Records:\n");
    for(i=0;i<3;i++)
    {
    	printf("student %d:\n",i+1);
    	printf("Name:%s\n",s[i].name);
    	printf("Roll no:%f\n",s[i].roll);
    	printf("Marks:%f\n",s[i].marks);
    }   
}
