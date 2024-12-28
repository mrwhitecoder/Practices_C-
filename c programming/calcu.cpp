#include<cstdio>
#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int imag;
	public:
		void acceptRecord(int real, int imag){
			cout << "Enter the real number :";
			cin >> this->real;
			cout << "Enter imag number :" ;
			cin >> this->imag;
		}
};

int main(void){
	Complex c1;
	c1.acceptRecord(10,20);
	return 0;
}