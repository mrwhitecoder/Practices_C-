#include<stdio.h>

void sumFunction(){
	int a;
	int b;
	int c;

	
	printf("Enter the number 1:\n");
	scanf("%d",&a);
	
	printf("Enter the number 2: \n");
	scanf("%d", &b);
	
	c = a+b;
	
	printf("Sum of two number %d\n",c);
}

int main()
{
	sumFunction();
	return 0;
}