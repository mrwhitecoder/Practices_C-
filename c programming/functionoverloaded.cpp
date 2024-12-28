#include<iostream>
using namespace std;

class print{
	public:
		//overloaded function with no argument
		void show()
		{ 
		cout << "No argument function called " << endl;
		}
		
		//overloaded function with one argument
		void show(int i)
		{
			cout << "Integer argument" << i << endl;
			
		}
		
		//overloaded function with two argument
		
		void show(int i, double e)
		{
			cout << "Integer & double " << i << ", " << e << endl;
		}
};

int main()
{
	print obj;
	obj.show();
	obj.show(5);
	obj.show(19,3.78);
	
	return 0;
}