#include<iostream>
using namespace std;

class name{
	
	public :
	//overloaded function with no argument
	void show(){
		cout << " no argument " << endl;
	}
	
	//overloaded function with 1 argument
	
	void show(int i){
		cout << "Integer argument "<<i << endl;
	
	
	}
	
	void show(int i, double d){
		cout << i <<" , "<< d << endl;
	}
	
};

int main(){
	name obj;
	obj.show();
	obj.show(10);
	obj.show(14,59.3);
	
	return 0;
}