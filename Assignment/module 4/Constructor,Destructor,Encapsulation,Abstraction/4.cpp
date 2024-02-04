/* 4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account. */

#include<iostream>
using namespace std;

class Bank_Account{
	private:
		int Balnce=500,amount,account_no;
	public:
		void get_value(){
			cout<<"\n Enter your bank account number:";
			cin>>account_no;
			
			cout<<"\n Your Bank Account Balance is "<<Balnce;
		}
			
		void deposit(){
			cout<<"\n Enter your deposit amount:";
			cin>>amount;
			
			Balnce=Balnce+amount;
			
			cout<<"\n  Now Your Bank Account Balance is "<<Balnce;
			
		}
		
		void withdraw(){
		
			cout<<"\n Enter your withdraw amount:";        
			cin>>amount;
			
			Balnce=Balnce-amount;
			
			cout<<"\n  Now Your Bank Account Balance is "<<Balnce;
		
		}
};

	int main(){
		int ch;
		
			Bank_Account b1;
			b1.get_value();
			
			cout<<"\n==========Choice Manu==========";
			
			cout<<"\n 1 -> deposit money";
			cout<<"\n 2 -> withdraw money";
			
			cout<<"\n Enetr your Choice number:";
			cin>>ch;
			
			switch(ch){
				case 1:
					b1.deposit();
					break;
					
				case 2:
					b1.withdraw();
					break;
					
				default:
					cout<<"\n !! Wrong Choice !! \n plz Enter velid choice.";
					break;
		}
}
			
