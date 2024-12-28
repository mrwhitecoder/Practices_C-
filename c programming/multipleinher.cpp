#include<iostream>
using namespace std;


// base class 1
class Car {
	public :
		void drive(){
			cout << " Driving on land " << endl;
		}
};

// base class 2
class Boat {
	public :
		void sail(){
			cout << "Sailing on water" << endl;
		}
};

//base class 3
class Plane {
	public :
		void Airoplane(){
			cout << "flying Airoplane" << endl;
		}
};


// Derived class
class Vehicles : public Car, public Boat, public Plane {
	public :
		void use() {
			drive();
			sail();
			Airoplane();
		}
};


int main() {
	Vehicles myVehicle;
	myVehicle.use();
	return 0;
}