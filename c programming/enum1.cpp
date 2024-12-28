#include <iostream>
using namespace std;

enum TrafficLight {
	Red = 1,
	Yellow = 2,
	Green = 3
};

int main(){
	
	int userInput;
	cout << "Enter the traffic signal ";
	cin >>  userInput;
	TrafficLight signal = static_cast<TrafficLight>(userInput);
	
	switch (signal) {
		case Red:
			cout <<"Stop!" << endl;
			break;
		case Yellow:
			cout <<"Slow down" << endl;
			break;
		case Green:
			cout <<"GO!" << endl;
			break;
		default:
			cout << "Invalid signal! " << endl;
			break;
	}
}