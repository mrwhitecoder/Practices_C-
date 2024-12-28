#include<iostream>
#include<string>
using namespace std;

class BankAcc{
	private :
		long accno;
		char name;
		double balance;
		
	public :
		BankAcc(long accno, char name,double balance){
			this->accno = accno;
			this->name = name;
			this->balance = balance;
		}
		
		void Deposit(double amount){
			balance += amount;
			cout <<"Deposit " << amount << "New balance " << balance << endl;
			
		}
		
		void displayBalance(){
			cout << "Account no" << accno << endl;
			cout << "Balance " << balance << endl;
		}
		
};

class SavingAcc : public BackAcc {
	private:
		double interestRate = 500;
	public:
		SavingAcc(char name, double balance, double interestRate) : BankAcc(name,balance){
			this->interestRate = rate;
		}
		
		void addInterest() {
			double interest = (balance * rate)/100;
			balance += interest;
			cout << "Interest of " << interest << "added. new balance" << balance <<end;
			
		}
};

class CurrentAcc : public BackAcc {
	private :
		double overdraftlimit;
	public :
		CurrentAcc(char name,double balance, double overdraftlimit) : BackAcc(name,balance){
			this->overdraftlimit = limit;
		}
		
		void withdraw(double amount){
			if(balance - amount >= overdraftlimit){
				balance -= amount;
				cout << "with"
			}
		}
		
}