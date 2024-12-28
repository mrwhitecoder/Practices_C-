#include<iostream>

using namespace std;

// base class
class Animal {
	public :
		
	void sound(){
		cout << "The animal make sound" << endl;
	}
};

//derived class

class Dog : public Animal {
	public :
	void bark(){
		cout << "The bark like bow bow" << endl;
	}
	
};

// derived class
class Cat : public Animal {
	public :
		void Meow(){
			cout << "Meow Meow" << endl;
		}
};

int main()
{
	Dog mydog;
	Cat mycat;
	
	mydog.bark();
	mycat.Meow();
	
	return 0;
}