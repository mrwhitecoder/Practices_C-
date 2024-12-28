#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int &b = a;
	a++;
	b++;
	cout<<a<<endl;
}