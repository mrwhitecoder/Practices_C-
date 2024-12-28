#include<iostream>
#include<string>
#include<cstdio>
using namespace std;


template<class T>
void swap_object(T &object1, T &object2 ){
	T temp = object1;
	object1 = object2;
	object2 = temp;
}

int main() {
	int a = 10;
	int b = 20;
	
	swap_object<int>(a, b);
	
	cout <<"a : " << a << endl;
	cout <<"b  : " << b << endl;
	return 0;
}