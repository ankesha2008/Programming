#include<stdio.h>
int main()
{
int temp,a,b;
printf("enter two nos u want to insert:\n");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swap %d=a\n",a);
printf("after swap %d=b\n",b);
return 0;
}