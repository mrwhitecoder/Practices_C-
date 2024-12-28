#include<stdio.h>
//even number
int main()
{
	int i;
	int num;
	
	if(num % 2 == 0)
	{
	printf("Enter the even number\n",num);
	scanf("%d",&num);
	
	for(i= num;i<20;i+=2)
	{
	printf("%d\n",i);
	}
	}
	
	else
	{
	printf("It's not even\n");
	}
	
	return 0;
	
}