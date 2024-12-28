#include <iostream>
using namespace std;

class Rectangle {
	public:
		int calculateArea(int length, int width) {
			return length * width;
		}
		
		int exAreaCalculate(int length, int width) {
			int (Rectangle::*funcPtr)(int, int) = &Rectangle::calculateArea;
			
			return (this->*funcPtr)(length, width);
			 
		}
	
	
};

int main()
{

	Rectangle rect;
	int length, width;
	
	cout << "Enter the length of the rectangle : ";
	cin >> length;
	cout << "Enter width of the rectagle: ";
	cin >> width;
	
	int area = rect.exAreaCalculate(length, width);
	cout << "The area of the rectangle is : " << area << endl;
	
	return 0;
	
}