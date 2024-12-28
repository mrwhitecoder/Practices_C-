#include<iostream>
using namespace std;

class Animal{
	public :
		virtual void Sound(){
			cout<<"The animal make sound"<< endl;
		}
};

class dog : public Animal {
	public :
		void Sound() override {
			cout<<"The will bark" << endl;
		}
};

class cat : public Animal {
	public :
		void Sound() override {
			cout << "The cat will meow " << endl;
		}
};

int main() {
	Animal *Animalptr;
	
	dog mydog;
	cat mycat;
	
	Animalptr = &mydog;
	Animalptr->Sound();
	
	Animalptr = &mycat;
	Animalptr->Sound();
	
	return 0;
}