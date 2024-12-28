//Function overloading

#include <iostream>
using namespace std;

class Math{
	
	public :
	
	int add(int a, int b){
		return a + b;
	}
	
	// Function to add two floating -point numbers
	
	double add(double a, double b) {
		return a + b;
	}
};

int main() {
	Math myMath;
	cout << "sum of integers: " << myMath.add(5, 3) << endl;
	cout << "sum of double " << myMath.add(2.5, 3.8) << endl;
	return 0;
}