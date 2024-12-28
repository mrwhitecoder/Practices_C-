#include<iostream>
using namespace std;

class Employee{
	// Private attributes
	private:
		string name;
		int age;
		double salary;
		
		// public methods to access and modify private data
		
		public:
			//setter for name
			void setName(string empName) {
				name = empName;
			}
		
		// setter for age with validation
		
		void setAge(int empAge) {
			if(empAge > 0){
				age = empAge;
				
			}
			else{
				cout << "Invalid age!" << endl;
			}
		}
		
		//setter for salary
		void setSalary(double empSalary){
			if(empSalary >= 0) {
				salary = empSalary;
			}
			else
			{
				cout << "Salary cannot be negative!" << endl;
			}
		}
		
		//Getter for name
		string getName(){
			return name;
		}
		
		// Getter for age
		
		string getAge(){
			return age;
		}
		
		// Getter for Salary
		double getSalary(){
			return salary;
		}
		
		// Method to display employee details
		void displayInfo() {
			cout << "Employee name" << name << endl;
			cout << "Employee age " << age << endl;
			cout << "Employee Salary " << salary << endl;
			
		}
};


int main(){
	Employee emp;
	
	emp.setName("Ajay Sharma");
	emp.setAge(24);
	emp.setSalary(600000);
	
	//Access employee details using public getter methods
	
	cout << "Employee Name" << emp.getName() << endl;
	cout << "Employee Age" << emp.getAge() << endl;
	cout << "Employeee Salary" << emp.getSalary() << endl;
	
	emp.displayInfo();
}