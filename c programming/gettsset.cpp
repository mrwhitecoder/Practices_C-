#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int imag;
	public:
		int getReal(){
			return this->real;
		}
		
		void setReal(){
			this->real = real;
		}
		
		int getImag(){
			return this->real;
			
		}
		
		void setImag(){
			this->imag = imag;
		}
};

int main(){
	Complex c1;
	
	c1.setReal( 10 );
	c1.setImag( 20 );
	
	int real = c1.getReal();
	cout <<"Real number : " << real << endl;
	
	int imag = c1.getImag();
	cout <<"Imag Number : " << imag << endl;
	
	return 0; 
}