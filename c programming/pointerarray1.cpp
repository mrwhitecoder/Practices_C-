#include<iostream>
using namespace std;

void array()
{
	int v[6] = {10, 20, 30, 50, 60, 70};
	
	int *p;
	
	int n;
	
	n = v;

	p = v;
	
	for(int i = 0; i<n;++i)
	{
		cout << "VALUES AT p = " << p << "\n";
		cout << "VALUES AT *p = "<< *p << "\n";
		
		p++;
	}
}

int main(){
	array();
}
