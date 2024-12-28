#include<iostream>
using namespace std;

void increaseByFive(int &num) {
	num+= 5;
}

int main()
{
	
	int value = 15;
	cout << "Before: " << value << endl;
	
	increaseByFive(value);
	
	cout << "After: " << value << endl;
	
	return 0;
}