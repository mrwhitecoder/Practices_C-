#include<stdio.h>
int main()
{
	int myAge = 24;
	int* ptr = &myAge;
	
	printf("%p\n", ptr);
	
	
	// dereference : output the value of myAge with the pointer (43)
	printf("%d\n", *ptr);
	
}