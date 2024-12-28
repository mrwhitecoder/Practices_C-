#include<iostream>
#include<string>
using namespace std;

class Student {
	private:
		int studentID;
		string name;
		double GPA;
	public:
		Student(int id, const string& studentName, double initialGPA) : studentID(id), name(studentName) {
			if (initialGPA >= 0 && initialGPA <= 4.0) {
				GPA = initialGPA;
			}
			else
			{
				GPA = 0.0;
				cout << "Invalid GPA. setting GPA to 0.0" << endl;
			}
		}
		
	int getStudentID() const {
		return studentID;
	}
	
	string getName() const {
		return name;
	}
	
	void setName(const string& newName) {
		name = newName;
	}
	
	double getGPA() const {
		return GPA;
	}
	
	void setGPA(double newGPA) {
		if(newGPA >= 0 && newGPA <= 4.0)
		{
			GPA = newGPA;
			
		}
		else {
			cout << "Invalid GPA. GPA must be between 0.0 and 4.0" << endl;
		}
	}
}; 

int main() {
	int id;
	string name;
	double initialGPA;
	
	cout << "Enter Student ID: ";
	cin >> id;
	cin.ignore();
	
	cout << "Enter Student Name: ";
	getline(cin,name);
	
	cout << "Enter Initial GPA : ";
	cin >> initialGPA;
	
	Student student(id, name, initialGPA);
	
	cout << "\nStudent Details: " << endl;
	cout << "ID: "<< student.getStudentID() << endl;
	cout << "Name: " << student.getName() << endl;
	cout << "GPA: " << student.getGPA() << endl;
	
	string newName;
	cout <<"\nEnter new name for the student: ";
	cin.ignore();
	getline(cin, newName);
	student.setName(newName);
	
	double newGPA;
	cout << "Enter new GPA:  ";
	cin >> newGPA;
	student.setGPA(newGPA);
	
	double newGrade;
	cout << "Enter new grade to update GPA: ";
	cin >> newGrade;
	student.updateGPA(newGrade);
	
	cout << "\nUpdated Student Details: " << endl;
	cout << " ID: " << student.getStudentID() << endl;
	cout << "Name: " << student.getName()<< endl;
	cout << "Update GPA " << student.getGPA() << endl;
	
	return 0;
}