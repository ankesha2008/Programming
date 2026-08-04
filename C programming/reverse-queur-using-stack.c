//1.REVERSE A QUEUE USING A STACK

//Problem statement:
//REVERSE THE COMPLETE QUEUE USING ONLY ONE HELPER STACK.ALLOWED OPERATIONS:ENQUEUE,
//DEQUEUE,PUSH,POP.NO ARRAYS OR EXTRA QUEUES.

//input:
//n=5,queue:[1 2 3 4 5]
//output:
//[5 4 3 2 1]
//task:
//writw a c program to solve the problem using only queue and stack operations.
//Also analyze the time and space complexity.


#include<stdio.h>
#define MAX 100
int main()
{
int queue[MAX],stack[MAX];
int front=0,rear=-1,top=-1;
int n,i,x;
printf("Enter the no of elements:\n");
scanf("%d",&n);
printf("Enter the queue elements:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&x);
  queue[++rear]=x;
}
while(front<=rear)
{
  stack[++top]=queue[front++];
}
front=0;
rear=-1;
while(top>=0)
{
  queue[++rear]=stack[top--];
}
printf("Reverse queue:\n");
for(i=front;i<=rear;i++)
{
  printf(" %d",queue[i]);
}
return 0;
}