#include <iostream>
using namespace std;

int main()
{
	int var = 20;
	
	int *ptr = &var;
	
	
	cout << " Value of var: " << var << endl;
	cout << "Address of var: " << &var << endl;
	cout << "Pointer ptr points to : " << ptr << endl;
	cout << "Value at ptr: " << *ptr << endl;
	
	return 0;
}