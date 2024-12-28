#include<stdio.h>

int main()
{
	int result;
	
	printf("Enter your result mark:\n");
	scanf("%d",&result);
	
	if(result>35)
	printf("your passed");
	
	else
	printf("failed");
	
	return 0;
	
}