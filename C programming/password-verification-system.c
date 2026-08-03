#include<stdio.h>
int main(){
int username,password,correct_username=1004,correct_password=409;
printf("Enter usernsme:\n");
scanf("%d",&username);
if(username==correct_username)
{
	printf("Enter password:\n");
	scanf("%d",&password);
    if(password==correct_password)
    {
	printf("sucessfully it is log in\n");
}
else
{
	printf("incorrect password\n");
}
}
else
{
	printf("invalid user\n");
}
return 0;
}