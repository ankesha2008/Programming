#include<stdio.h>

int main() {
	int i,n,sum=0;
	printf("Enter no. :");
	scanf("%d",&n);
	
	printf("\nSum of first %d natural number = ",n);
	for(i=1;i<=n;i++)
		sum+=i;
	printf("%d",sum);
	
	return 0;
}
