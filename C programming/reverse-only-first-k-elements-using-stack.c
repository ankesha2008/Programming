//2.REVERSE ONLY THE FIRST K ELEMENTS OF A QUEUE

//Problem statement
// REVERSE ONLY THE FIRST K ELEMENTS OF A QUEUE
//USING ONE STACK;KEEP REMAINING ELEMENTS IN SAME
//RELATIVE ORDER.

//Input:
//n=5,k=3,queue=[1 2 3 4 5]
//output
//[3 2 1 4 5]

//TASK:
//write a c program to solve the problem using only queue and stack operations.
//Also analyze the time and space complexity

#include<stdio.h>
#define MAX 100
int main()
{
int queue[MAX],stack[MAX];
int front=0,rear=-1,top=-1;
int k,n,i,x;
printf("Enter the no of elements:\n");
scanf("%d",&n);
printf("Enter the queue elements:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&x);
  queue[++rear]=x;
}
printf("Enter the value of k:\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
  stack[++top]=queue[front++];
}
front=0;
rear=-1;
while(top>=0)
{
  queue[++rear]=stack[top--];
}
while(front<n)
{
	queue[++rear]=queue[front++];
}
printf("Reverse queue:\n");
for(i=front;i<=rear;i++)
{
  printf(" %d",queue[i]);
}
return 0;
}

Time complexity:o(n)
space complexity:o(k)