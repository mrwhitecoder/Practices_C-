#include<iostream>

using namespace std;

class Sample {
	public : 
		// Constructor
		Sample(int n){
			number = n;
			cout << "Constructor is called! Number is set to " << number <<endl;
			
		}
		
		~Sample(){
			cout << "Destructor is called! Cleaning UP.." << endl;
		}
		
		//Function to display value
		void display() {
			cout << "The number is " << number << endl;
		}
			
		
	private:
		int number;
};

int main() {
	//Creating a object of sample
	Sample obj(10);
	obj.display();
	
	return 0; 
}