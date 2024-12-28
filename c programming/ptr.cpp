#include<cstdio>

int main(void){
	int *ptrNumber = NULL;
	int num1 = 10;
	ptrNumber = &num1;
	*ptrNumber = 50;
	
	printf("Num1 : %d\n", num1);
	printf("Num1 : %d\n", *ptrNumber);
	
	int num2 = 20;
	ptrNumber = &num2;
	*ptrNumber = 60;
	printf("Num2 : %d\n", num2);
	printf("Num2 : %d\n", *ptrNumber);
}