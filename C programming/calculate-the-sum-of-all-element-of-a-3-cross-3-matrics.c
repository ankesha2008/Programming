#include<stdio.h>

int main() {
	int i,j,sum=0;
	int arr[3][3];
	printf("\nEnter the values of matrix:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	}
	
	printf("\nThe Matrix :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf(" %d ",arr[i][j]);
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			sum+=arr[i][j];
	}
	
	printf("\nSum of the elements of the matrix = %d",sum);
	return 0;
}