#include <iostream>
using namespace std;

//Function to calculate the area of rectangle

int calculateArea(int length, int width) {
	return length * width;
}

int main()
{
	//Declare a function pointer
	
	int(*funcPtr)(int,int);
	
	funcPtr = &calculateArea;
	
	// Get user input
	int length, width;
	cout << "Enter length of the rectangle : ";
	cin >> length;
	cout << "Enter width of the rectagle : ";
	cin >> width;
	
	// call the function using the pointer
	int area = funcPtr(length, width);
	cout << " The area of the rectangle is : " << area << endl;
	
	return 0;
	
}