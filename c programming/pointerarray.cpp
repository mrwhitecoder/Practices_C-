#include<iostream>
using namespace std;

void array()
{
	int A[] = { 5,10,20};
	int *ptr;
	ptr = A;
	cout << " Element of the array are : ";
	cout << ptr[0] << " " <<ptr[1] << " " <<ptr[2];
	
}

int main()
{
	array();
}