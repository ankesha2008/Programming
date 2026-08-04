//3.interleave Two halves of queue using only one stack

#include<stdio.h>
#define MAX 100

int main()
{
    int queue[MAX], stack[MAX];
    int n,i;
    int top=-1;
    printf("Enter n:\n");
    scanf("%d", &n);
    printf("Enter %d queue elements: ",2*n);
    for(i=0;i<2*n;i++)
    scanf("%d", &queue[i]);
    // Push first half into stack
    for(i=0;i<n;i++)
        stack[++top] = queue[n-1-i];
    printf("Interleaved Queue:\n");
    for(i=n;i<2*n;i++)
    {
        printf("%d ",stack[top--]);// First half element
        printf("%d ",queue[i]);// Second half element
    }
    return 0;
}

