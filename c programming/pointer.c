#include<stdio.h>
int main()
{
	int myAge = 24;
	int* ptr = &myAge;
	
	// output the value of age(24)
	printf("%d\n", myAge);
	
	//Output the memory addrress of myAge 
	
	printf("%p\n", &myAge);
	
	printf("%p\n", ptr);
	
	
}