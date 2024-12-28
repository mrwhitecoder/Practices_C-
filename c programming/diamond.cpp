#include<iostream>
using namespace std;

// Base class 1
class Base {
	public :
		void show(){
			cout << " This is base class" << endl;
		}
};

//Derived class

class Derived1 : virtual public Base {
};
class Derived2 : virtual public Base {
};

class Final : public Derived1, public Derived2 {
};

int main(){
	Final obj;
	obj.show();
	return 0;
}