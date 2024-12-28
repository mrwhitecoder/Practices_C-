#include<iostream>
using namespace std;

//base class

class Animal {
	public:
		string landAnimal = "Runner";
		
		string SeaFish = "Fish";
		
		void lanimal() {
			cout << "Fast and furios \n";
			
		}
		
		void sfish(){
			cout<<"Deep swiming\n";
		}
		
};

//Derived class

class Fastanimal: public Animal {
	public:
		string animaltype = "Lion";
};

class Ranimal: public Animal {
	public:
		string animaltype = "Dear";
};

class Sanimal: public Animal {
	public:
		string animaltype = "shark";
};

int main(){
	Fastanimal myFastanimal;
	Ranimal myRanimal;
	Sanimal mySanimal;
	
	myFastanimal.lanimal();
	cout << " Fastanimal " << myFastanimal.landAnimal + " " + myFastanimal.animaltype <<endl;
	
	myRanimal.lanimal();
	cout << " Slow animal" << myRanimal.landAnimal + " " + myFastanimal.animaltype << endl;
}