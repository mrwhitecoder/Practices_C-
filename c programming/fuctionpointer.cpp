#include <iostream>
using namespace std;

void greet() {
	cout << "Hello, World" << endl;
}

int main(){
	void (*funcPtr)();
	
	funcPtr = &greet;
	
	//Call the function using the pointer
	
	funcPtr();
	
	return 0;
}