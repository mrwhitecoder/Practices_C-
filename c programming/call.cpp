#include<iostream>
using namespace std;

class luckydraw{
	
	private :
		int id;
		char name;
	public :
		luckydraw(int id, char name){
			this->id = id;
			this->name = name;
		}
	
	int draw(){
		if(id>5){
			cout << "your are lucky person" << endl;
		}
		else{
			cout << "better luck next time" << endl;
		}
	}
	
};

int main(){
	int id;
	char name;
	

	cout << " Enter your id " << endl;
	cin >> id;
	
	cout << "Enter your name" << endl;
	cin >> name;
	
	
	
	luckydraw luck(id,name);
	luck.draw();
	return 0;
}
