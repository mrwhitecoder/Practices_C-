#include <iostream>
#include <string>
using namespace std;

class Employee {
	private:
		int id;
		string name;
		double salary;
	
	public:
		
		//constructor
		Employee(int empId, const string &empName, double empSalary) : id(empId), name(empName), salary(empSalary) {
		}
		
		//function1
		int getId() const{
			return id;
		}
		
		//function2
		
		string getName() const{
			return name;
		}
		
		//parameter function1
		
		void setName(const string &newName){
			if(!newName.empty()){
				name = newName;
			}
			else {
				cout << "Name cannot be empty. \n";
			}
		}
		
		
		//function3
		double getSalary() const {
			return salary;
		}
		
		//parameter function2	
		void setSalary(double newSalary) {
			if(newSalary > 0) {
				salary = newSalary;
			}
			else
			{
				cout << "Salary must be positive. \n";
			}
		}
		
		void giveRaise(double percentage) {
			if (percentage > 0) {
				salary += salary * (percentage/100);
				cout << "Salary raised by " << percentage << "%. \n";
				
			}
			else {
				cout << "Raise percentage must be positive. \n";
			}
		}
	};
		
		int main()
		{
			Employee emp1(101,"John doe", 50000);
			cout << "Employee Id:" << emp1.getId() << endl;
			cout << "Employee Name" << emp1.getName() << endl;
			cout << "Current Salary: $" << emp1.getSalary()<<endl;
			
			
			emp1.giveRaise(30);
			cout << "New Salary : $" << emp1.getSalary() << endl;
			
			emp1.setName("Jone smith");
			cout << "Updated employee name: " << emp1.getName() << endl;
			
			emp1.setSalary(-30000);
			
			return 0;
		}
