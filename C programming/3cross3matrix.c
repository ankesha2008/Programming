#include<stdio.h>

int main() {
	int i,j,r,c;
	printf("Enter no. rows & columns:");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("\nEnter the values of matrix:-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	
	printf("\nThe Matrix :-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf(" %d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}

