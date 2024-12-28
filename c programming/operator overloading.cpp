//Operator Overloading

#include<iostream>
using namespace std;

class Complex {
	private :
		double real, imag;
	
	public:
		Complex(double r = 0, doublie i = 0 ) : real(r), imag(i) {
		}
		
		//overloading the + operator
		
		Complex operator + (const Complex& obj){
			return Complex(real + obj.real, imag + obj.imag);
		}
		
		void display(){
			cout << real <<" + " << imag << " i " <<endl;
			
		}
};

int main(){
	Complex c1(1.1,3.3), c2(3.4, 5.5);
	Complex c3 = c1 + c2;
	c3.diplay();
	return 0;
}