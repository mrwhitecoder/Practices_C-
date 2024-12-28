#include<iostream>
using namespace std;

//base class
class Animal{
	public :
		virtual void sound(){
			cout << "Animal make a sound" << endl;
		}
};

//derived class 1
class Dog : public Animal {
	void sound() override {
		cout << " dog barks" << endl;
	}
};

//derived class 2

class Cat : public Animal {
	void sound() override {
		cout <<" cat meow " << endl; 
	}
};

int main()
{
	Animal* animalPtr; //Pointer of base classtype
	
	Dog mydog;
	Cat mycat;
	
	//pointing to dog object
	
	animalPtr = &mydog;
	animalPtr->sound();
	
	//pointing to cat object
	
	animalPtr = &mycat;
	animalPtr->sound();
	
	return 0;
}