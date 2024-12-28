#include<stdio.h>
int main()
{
	int myNumbers[] = {22,24,26,28,30};
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	
	printf("%d", length);
}