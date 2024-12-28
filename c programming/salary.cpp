#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

//Employee class
class Employee {
	private:
		char name[30];
		int empid;
		float salary;
	
	public:
		Employee(const char *name = " ", int empid = 0, float salary = 0);
		
	public:
		void printRecord();
};

Employee::Employee(const char *name, int empid, float salary)
	: empid(empid), salary(salary){
		strcpy(this->name, name);
	}
	

void Employee::printRecord(){
	cout << "Name :" << this->name << endl;
	cout << "Empid: " << this->empid << endl;
	cout << "Salary " << fixed << setprecision(2) << this->salary << endl;
}

int main() {
	Employee emp1;
	emp1.printRecord();   
	
	Employee emp2("chandan", 444, 450060.06f);
	emp2.printRecord();
	7 s6  