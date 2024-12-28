#include<iostream>

using namespace std;

void printMessage(const string& msg) {
	cout << msg << endl;
	string& modifiableMsg = const_cast<string&>(msg);
	modifiableMsg = "Modified message!";
}

int main(){
	string message = "Original message";
	printMessage(message);
	cout << "After const_cast: " << message << endl;
	return 0;
}