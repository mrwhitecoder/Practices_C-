#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int *ptr = (int*)malloc(sizeof(int));
	
	
	*ptr = 123;
	cout<<"Value : " << *ptr << endl;
	
	free(prt);
	return 0;
}