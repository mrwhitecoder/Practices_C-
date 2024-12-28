#include<iostream>
using namespace std;

int main() {
	int x = 55;
	char *p = reinterpret_cast<char*>(&x);
	cout << "reinterpret_cast: " << *p << endl;
	return 0;
}