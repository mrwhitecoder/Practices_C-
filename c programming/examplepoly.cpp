#include<iostream>

using namespace std;

class vehicle {
	public :
		virtual void service(){
			cout<<"We provide vehicle services"<<endl;
		}
};

class car : public vehicle {
	public :
		void service() override {
			cout<<"The car services we provide"<< endl;
		}
		
		//overloaded in 1 parameter
		void service(int milage){
			cout <<"The car milage is : " << milage << endl;
			
		}
		//overloaded in 2 parameter
		void service(int milage, string type){
			cout << "The car milage with type is " << milage << type << endl;
		}
		
		
};


class bike : public vehicle {
	public :
		void service() override {
			cout << "We provide bike service also" << endl;
		}
};

int main()
{
	vehicle *myvehicle;
	
	car mycar;
	bike mybike;
	
	myvehicle = &mycar;
	myvehicle->service();
	mycar.service(5000);
	mycar.service(5000,"BMW");
	
	
	myvehicle = &mybike;
	myvehicle ->service();
	
	return 0;
}