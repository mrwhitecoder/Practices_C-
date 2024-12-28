#include<stdio.h>
int main()
{
	int myNumber[4] = {33,44,55,66,77};
	int *ptr = myNumber;
	int i;
	
	for (i = 0 ; i<4; i++){
		printf("%d\n", *(ptr+i));
	}
}