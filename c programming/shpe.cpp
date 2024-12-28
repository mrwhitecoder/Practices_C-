#include<iostream>

using namespace std;


//base class
class Shape {
	public :
		void Display(){
			cout << "This is are shapes "<< endl;
		}
};

//Derived class
class Triangle : public Shape {
	public :
		void side(){
			cout <<" Triangle have 3 sides " << endl;
		}
};

//Derived class 2

class Rectangle : public Triangle {
	public :
		void Fourside() {
			cout << "Rectangle have 4 sides " << endl;
		}
};

int main(){
	Triangle myShape;
	myShape.Display();
	myShape.side();
	myShape.Fourside();
	
	return 0;
}