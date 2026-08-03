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
