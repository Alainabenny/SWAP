#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numbers : \n");
	scanf("%d %d",&num1,&num2);
	printf("number before swapping is %d and %d \n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("number after swapping is %d and %d \n",num1,num2);
	return 0;
}
