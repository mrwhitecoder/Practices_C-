#include<iostream>
using namespace std;

int main(){
	int A[6] = {2,4,5,6,9,10};
	int *p = A;
	
	for(int i=0;i<4;i++)
	{
		cout << *p-- << endl;
	}
}