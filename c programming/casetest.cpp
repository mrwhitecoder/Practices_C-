#include<iostream>
using namespace std;


//base class
class Gender{
	public :
		virtual void eat(){
			cout << "How much eat " << endl;
		}
};

//derived class

class male : public Gender{
	void eat() override {
		cout << "Eat low " << endl;
	}
	
};

//derived class 2

class female : public Gender {
	void eat() override{
		cout << "Eat too much" << endl;
	}
};

int main()
{
	Gender* genderPtr;
	
	male mymale;
	female myfemale;
	
	genderPtr = &mymale;
	genderPtr->eat();
	
	genderPtr = &myfemale;
	genderPtr->eat();
	
	return 0;
	
}

	

