Q1. Write a C program to accept a string from the user and determine its length without using the built-in strlen() function.

SOURCE CODE-

#include<stdio.h>

int main() {
	int i=0;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	while( str[i]!='\n' && str[i]!='\0' ) 
		i++;	
	printf("The string length: %d",i);
	return 0;
}

Q2. Write a C program to accept a string from the user and count the total number of vowels and consonants present in the string.

SOURCE CODE-

#include<stdio.h>

int main() {
	int i=0,len,vowels=0,consonants=0;
	char ch,str[100];
	printf("Enter a string: ");
	gets(str);
	while( str[i]!='\n' && str[i]!='\0' ) 
		i++;	
	len=i;
	i=0;
	while (i<=len) {
        ch = str[i];

        // Convert uppercase letters to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if the character is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

	return 0;
}


3. Write a C program to generate and display the multiplication table of a user-entered number using a for loop.

SOURCE CODE-

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


4. Write a C program to calculate the sum of the first N natural numbers using a while loop.

SOURCE CODE-

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

Q5. Write a C program to accept the elements of a 3 × 3 matrix from the user and display the matrix in proper row and column format.

SOURCE CODE-

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


Q6. Write a C program to calculate and display the sum of all elements of a 3 × 3 matrix.

SOURCE CODE-

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



Q7. Write a C program to swap the values of two integer variables using pointers.

SOURCE CODE-

#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1, *p2;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping:\n");
    printf("a = %d    b = %d",a,b);
    p1 = &a;
    p2 = &b;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d    b = %d",a,b);

    return 0;
}

Q8. Write a C program to create a user-defined function that accepts two integers as input and returns the larger of the two numbers.

SOURCE CODE-

#include <stdio.h>

int max( )
{
	int a,b;
	printf("Enter two integer: ");
	scanf("%d%d",&a,&b);
	if(a>b)
		return a;
	else
		return b;
}
int main() {
    printf("The larger of two integer is = %d",max());
    return 0;
}


Q9. Write a C program to create a user-defined function that determines whether a given number is even or odd.

SOURCE CODE-

#include <stdio.h>

int EvenOdd( int a )
{
	if(a%2==0)
		printf("EVEN");
	else
		printf("ODD");
}
int main() {
	int a,b;
	printf("Enter an integer: ");
	scanf("%d",&a);
	EvenOdd(a);
    return 0;
}


Q10. Write a C program to calculate the factorial of a given number using a recursive function.

SOURCE CODE-

#include <stdio.h>

int fact(int n)
{
	if(n<2)
		return 1;
	
	else
		return fact(n-1)*n;
}
int main() {
	int a;
	printf("Enter an integer: ");
	scanf("%d",&a);
	printf("Factorial of %d = %d",a,fact(a));
    return 0;
}
