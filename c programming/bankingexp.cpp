#include <iostream>
using namespace std;

class BankAccount {
	private :
		int accountNumber;
		double balance;
	public :
		BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {
		}
		
		void deposit(double amount) {
			if (amount > 0) {
				balance += amount;
				cout << "Deposited: " << amount << "\n";
				
			}
			else {
				cout << "Invalid deposit amount\n";
				
			}
		}
		
		void withdraw(double amount)
		{
			if(amount > 0 && amount <= balance) {
				balance -= amount;
				cout << "withdrawn: " << amount << "\n";
				
			}
			else 
			{
				cout << "Invalid withdraw amount or insufficient funds\n";
			}
		}
		
		double getBalance() const {
			return balance;
		}
		
		int getAccountNumber() const {
			return accountNumber;
		}
};

int main(){
	BankAccount myAccount(12345, 500.0);
	cout << "Account Number: " << myAccount.getAccountNumber() << endl;
	cout << "Current Balance:  $" << myAccount.getBalance() << endl;
	
	myAccount.deposit(150);
	cout << "Balance after deposit : " << myAccount.getBalance() << endl;
	
	myAccount.withdraw(100);
	cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;
	
	return 0;
}