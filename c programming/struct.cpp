#include<iostream>
#include<string>

using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{
	struct Books Book1;
	struct Books Book2;
	
	//Book1 specification
	strcpy( Book1.title, "Learn C++ Programming");
	strcpy( Book1.author, "Newton ");
	strcyp( Book1.subject, "C++ Programming");
	Book1.book_id, "12345";
	
	//Book2 specification
	strcpy( Book2.title, "Learn Java Programming"));
	strcpy( Book2.author, "Edison");
	strcpy( Book2.subject, "Java");
	Book2.book_id, "56123";
	
	//print book1 info
	
	cout << "Book 1 title " << Book1.title << endl;
	cout << "Book 1 author " << Book2.author << endl;
	cout << "Book 1 subject " << Book2.subject << endl;
	cout << "Book 1 id" << Book1.book_id << endl;
	
	//print book2 info
	
	cout << "Book 2 title " << Book2.title << endl;
	cout << "Book 2 author " << Book2.author << endl;
	cout << "Book 2 subject " << Book2.subject << endl;
	cout << "Book 2 id " << Book2.book_id << endl;
	
	return 0;
	
}