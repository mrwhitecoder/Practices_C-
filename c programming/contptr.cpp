#include<cstdio>

int main(void){
	const int *ptrNumber = NULL;
	
	const int num1 = 10;
	ptrNumber = &num1;
	printf("Num1 : %d\n", num1);
	printf("Num1 : %d\n", *ptrNumber);
	
	
	const int num2 = 20;
	ptrNumber = &num2;
	printf("Num2 : %d\n", num2);
	printf("Num2 : %d\n", *ptrNumber);
}