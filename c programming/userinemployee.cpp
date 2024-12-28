#include<iostream>
#include<string>
using namespace std;

class Employee {
	private:
		int employeeID;
		string name;
		double salary;
	public: 
	
		Employee(int id, const string& empName, double initialSalary) : employeeID(id), name(empName){
		
		if (initialSalary > 0) {
			salary = initialSalary;
		}
		else {
			salary = 0;
			cout << "Invalid salary or insufficiant funds" << endl;
		}
}

	int getEmployeeID() const {
		return employeeID;
	}
	
	string getName() const {
		return name;
	}
	
	void setName(const string& newName) {
		name = newName;
	}
	
	double getSalary() const{
		return salary;
	}
	
	void setSalary(double newSalary) {
		if(newSalary >= 0){
			if(newSalary >= 0){
				salary = newSalary;
			}
			else {
				cout << "Invalid salary. Salary cannot be negative." << endl;
			}
		}
		
	}
	
	void giveRaise(double percentage) {
		if(percentage > 0) {
			salary += salary * (percentage / 100);
			
		}
		else {
			cout << "Invalid raise percentage ." << endl;
		}
	}
		
};

int main(){
	int id;
	string name;
	double initialSalary;
	
	cout << "Enter Employee Id:";
	cin >> id;
	cin.ignore();
	
	cout<< "Enter initial salary:";
	cin >> initialSalary;
	
	Employee emp(id, name, initialSalary);
	
	cout << "\nEmployee Details: " << endl;
	cout << "ID: " << emp.getEmployeeID() << endl;
	cout << "Name: " << emp.getName() << endl;
	cout << "Salary : $" << emp.getSalary()<< endl;
	
	
	string newName;
	cout << "\nEnter new name for the employee: ";
	cin.ignore();
	getline(cin,newName);
	emp.setName(newName);
	
	double raisePercentage;
	cout << "Enter raise percentage";
	cin >> raisePercentage;
	emp.giveRaise(raisePercentage);
	
	
	cout << "\nUpdated employee details: " << endl;
	cout << "ID: " << emp.getEmployeeID() << endl;
	cout << "Name: " << emp.getName() << endl;
	cout << "Salary after raise : $" << emp.getSalary() << endl;
	
	return 0;
	
}