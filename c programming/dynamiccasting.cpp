#include<iostream>

using namespace std;

class Base {
	virtual void print() {
		
	}
	
};
class Derived : public Base {
	public:
		void show(){
			cout << "Derived class" << endl;
		}
};

int main() {
	Base *b = new Derived;
	Derived *d = dynamic_cast<Derived*>(b);
	if(d) {
		d->show();
	}
	else{
		cout << "cast failed " <<endl;
	}
	
	delete b;
	
	return 0;
}