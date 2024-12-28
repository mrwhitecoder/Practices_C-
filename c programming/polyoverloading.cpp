#include<iostream>
using namespace std;

class Calculator {
	public:
		//function with one parameter
		int add(int a, int b){
			return a + b;
		}
		
		//function with different datatype parameter
		double add(double a, double b) {
			return a + b;
		}
			
		//funtion with three parameter 
		int add(int a , int b, int c){
			return a + b + c;
		}
		
};

int main(){
	Calculator Cal;
	cout<<"sum of two integers: " << Cal.add(5,4) << endl;
	cout<<"sum of two doubles: " << Cal.add(6,7) << endl;
	cout<<"sum of three integers :" << Cal.add(3,5,6) << endl;
	return 0;
}