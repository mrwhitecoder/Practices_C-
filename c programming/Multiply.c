#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int result;
	
	printf("Enter the num1 \n");
	scanf("%d",&num1);
	
	printf("Enter the num2\n");
	scanf("%d",&num2);
	
	result = num1 * num2;
	
	printf("mul values are : %d",result);
	return 0;
}