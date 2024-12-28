#include<iostream>

using namespace std;

unsigned long amount = 1000, deposit = 0, withdraw = 0;

int choice, pin;


int main()
{
	while(pin != 1234){
		cout<<"Enter the secret pin number :"<< endl;
		cin >> pin;
		if(pin != 1234){
			cout<<"Please enter the valid password" << endl;
		}
		
	}
	do{
		cout<<"1. check balance" << endl;
		cout<<"2. withdraw cash" << endl;
		cout<<"3. deposit cash" << endl;
		cout<<"4. quit" <<endl;
		cout<<"================="<<endl;
		cout<<"Enter your choice" << endl;
		cin>> choice;
		switch(choice)
		{
			case 1:
				cout<< "Your balance " << amount << endl;
				break;
			case 2:
				cout<< "Enter the amount" << endl;
				cin>>withdraw;
				if(withdraw<1000)
				{
					amount = amount - withdraw;
					cout<<"The withdraw amount "<< amount <<endl;
					
				}
				else
				{
					cout<<"Insufficient balance" << endl;
					
				}
				break;
			case 3:
				cout<< "Enter the deposit amount : " << endl;
				cin>> amount;
				amount = amount + deposit;
				cout<< "The Total amount is : " << amount << endl;
				break;
			case 4:
				cout<<"Thank you..." << endl;
				break;
			default:
				cout<<"Invalid choice" << endl;
			
				
		}
	}while(choice!=4);
	return 0;
	
}