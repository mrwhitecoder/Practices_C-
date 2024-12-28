#include<iostream>
using namespace std;

void increase(void *data, int ptrsize)
{
	if(ptrsize == sizeof(char)){
		char *ptrchar;
		
		ptrchar = (char*)data;
		
		(*ptrchar)++;
		cout << "*data points to a char" << "\n";
		
	}
	else if (ptrsize == sizeof(int)) {
		int *ptrint;
		ptrint = (int*)data;
		(*ptrint)++;
		cout << "*data points to an int" << "\n";
	}
}

void array()
{
	char c;
	
	cin << "%c enter the char = " << c;
	
	int i;
	
	cin << "%d enter the int = " << i;
	
	increase(&c, sizeof(c));
	
	cout << "The new value of c is: "<< c << "\n";
	increase(&i, sizeof(i));
	cout << "The new values of i is: " << i << "\n";
}

int main()
{
	array();
	
}