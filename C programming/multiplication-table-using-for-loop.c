#include<stdio.h>

int main() {
	int i,n;
	printf("Enter no. :");
	scanf("%d",&n);
	
	printf("\nMultiplication table of %d",n);
	for(i=1;i<=10;i++)
		printf("\n %d X %d = %d",n,i,n*i);
	
	return 0;
}
