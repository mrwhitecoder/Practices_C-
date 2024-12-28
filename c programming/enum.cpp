#include <iostream>
using namespace std;

enum DaysOfWeek {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Sat,
	Sun
};

int main() {
	DaysOfWeek today = Wednesday;
	
	if (today == Wednesday){
		cout << "Today is Wednesday !" << endl;
	}
	
	return 0;
}