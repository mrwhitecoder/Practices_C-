#include<iostream>
using namespace std;

class Vehicle {
	public:
		string brand = "Ford";
		
		void hock() {
			cout << "Tuut, tuut \n";
		}
};

// Derived class 1

class Car : public Vehicle {
	public:
		string model = "Mustang";
};


// Derived class 2
class Truck : public Vehicle {
	public:
		string model = "F-150";				
};

//Derived class 3
class Motorcycle : public Vehicle {
	public:
		string model = "Harley ";		
};

int main() {
	Car myCar;
	Truck myTruck;
	Motorcycle myMotorcycle;
	
	// Demonstrating behaviour for Car
	
	myCar.hock();
	cout << "Car: " << myCar.brand + " " + myCar.model << endl;
	
	// Demonstrating behaviour for Truck
	myTruck.hock();
	cout << "Truck" << myTruck.brand << " " + myTruck.model << endl;
	
	// Demonstrating behavious for Motorcycle
	myMotorcycle.hock();
	cout << "Motorcycle " << myMotorcycle.brand + " " + myMotorcycle.model << endl;
	
	return 0;
	
}



